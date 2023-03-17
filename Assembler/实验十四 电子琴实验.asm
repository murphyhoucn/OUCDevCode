CODE 		SEGMENT            			;DZQ.ASM
ASSUME 	CS:CODE,ds:code
CONTROL equ 43h
COUNT0  equ 40h
COUNT1  equ 41h
COUNT2  equ 42h
IOCONPT EQU 0FF2BH				;扩展8255命令口
IOBPT	 EQU 0FF29H				;扩展8255 PB口
IOAPT	 EQU 0FF28H				;扩展8255 PA 口
PA      EQU 0FF20H 				;字位口
PB      EQU 0FF21H 				;字形口
PC      EQU 0FF22H 				;键入口
ORG 18F0H
START: 	JMP START0
BUF     DB ?,?,?,?,?,?			;显示缓冲区
KZ      DB ?						;存放键值
ltime   db ?						;定时单元
lkey    db ?						;上次键值
ZP      DW ?						;显示指针
data1:  										;字形代码表
db 0c0h,0f9h,0a4h,0b0h,99h,92h,82h,0f8h,80h,90h,88h,83h,0c6h,0a1h
db 86h,8eh,0ffh,0ch,89h,0deh,0c7h,8ch,0f3h,0bfh,8FH,0F1H
data3:  	dw   2273, 2024, 1805, 1704		;音频表
        	dw   1517, 1353, 1205, 1136
START0: 	mov ax,cs							;取代码段
        	mov ds,ax							;写数据段
        	CALL BUF1							;写”P”
        	MOV AL,88H							;扩展8255命令字		
        	MOV DX,IOCONPT
	 	OUT DX,AL
        	mov dx,IOBPT						;PB口置零
        	mov al,00
        	out dx,al
        	mov zp,offset buf					;设定显示指针初值
redikey:	call dispkey						;调用显示键扫
	 	cmp KZ,09h							;键值和9比较
        	JNC redikey						;大于9继续读键
        	cmp kz,01h							;键值和1比较
        	jc redikey							;小于1继续读键
        	mov bx,zp							;显示指针送BX
        	mov al,kz
        	mov [bx],al						;键值送显示缓存
        	cmp bx,offset buf+5				;比较指针
        	jz zp1								;等于5重置初值
        	inc bx								;指针加一
        	mov zp,bx							;存指针
        	jmp outtone						;转音频处理
zp1:		mov zp,offset buf
outtone:	mov dx,IOBPT						;PB置1(gate置1)
        	mov al,0ffh
        	out dx,al
        	mov al,kz							;取键值
        	mov ah,00h
        	dec ax
        	shl ax,1							
        	mov bx,offset data3				;音频首址
        	add bx,ax
        	mov ax,[bx]						;查表得音频数据
        	call t8253							;调用8253置T1初值
        	mov cx,20h							;延时(调用显示次数)
con1:   	push cx
        	call disp							;显示子程序
        	pop cx
        	loop con1
        	mov dx,IOBPT						;关GATE1
        	mov al,00
        	out dx,al
        	jmp redikey						;继续读键
t8253:  	push  ax							;8253子程序
        	mov   al, 76h          	; 计数器1, 16位二进制,方式3。
        	mov   dx, CONTROL
        out   dx, al
        pop   ax
        mov   dx, COUNT1
        out   dx, al
        mov   al, ah
        out   dx, al
        ret
;-------------------------
dispkey:	call disp					;显示子程序,注释见前
	call key					;键扫子程序,注释见前
	mov ah,al	     			;newkey
	mov bl,ltime    			;ltime
	mov bh,lkey    			;lkey
	mov al,01h
	mov dx,PA      			;0ff21h
	out dx,al
	cmp ah,bh
	mov bh,ah	     			;bh=new key
	mov ah,bl	     			;al=time
	jz disk4
	mov bl,88h
	mov ah,88h
disk4:		dec ah
	cmp ah,82h
	jz disk6
	cmp ah,0eh
	jz disk6
	cmp ah,00h
	jz disk5
	mov ah,20h
	dec bl
	jmp disk7
disk5:		mov ah,0fh
disk6:		mov bl,ah
		mov ah,bh
disk7:		mov ltime,bl
	mov lkey,bh
	mov KZ,bh
	mov al,ah
		ret
key:		mov al,0ffh
	mov dx,PB   					
	out dx,al
	mov bl,00h
	mov ah,0feh
	mov cx,08h
key1:		mov al,ah
	mov dx,PA    					
	out dx,al
	rol al,01h
	mov ah,al
	nop
	nop
	nop
	nop
	nop
	nop
	mov dx,PC    					
	in al,dx
	not al
	nop
	nop
	and al,0fh
	jnz key2
	inc bl
	loop key1
	jmp nkey
key2:		test al,01h
		je key3
		mov al,00h
		jmp key6
key3:		test al,02h
		je key4
		mov al,08h
		jmp key6
key4:		test al,04h
		je key5
		mov al,10h
		jmp key6
key5:		test al,08h
		je nkey
		mov al,18h
key6:		add al,bl
	cmp al,10h
	jnc fkey
	mov bl,al
	mov bh,0h
   mov si,offset data2
	mov al,[bx+si]
	ret
nkey:		mov al,20h
fkey:		ret
data2:		db 07h,04h,08h,05h,09h,06h,0ah,0bh
		DB 01h,00h,02h,0fh,03h,0eh,0ch,0dh
DISP:  	MOV AL,0FFH         			;显示子程序 ,5ms
	MOV DX,PA
	OUT DX,AL
	MOV CL,0DFH    		 		;20H 
	MOV BX,OFFSET BUF
DIS1:  	MOV AL,[BX]
       MOV AH,00H
	PUSH BX
	MOV BX,OFFSET DATA1
    ADD BX,AX
    MOV AL,[BX]
	POP BX
	MOV DX,PB
	OUT DX,AL
	MOV AL,CL
	MOV DX,PA
	OUT DX,AL
	PUSH CX
DIS2:		MOV CX,0a0H
       LOOP $
       POP CX
	CMP CL,0FEH
	JZ LX1
	INC BX
	ROR CL,1
	JMP DIS1
LX1:   	MOV AL,0FFH
		MOV DX,PB
		OUT DX,AL
		RET
BUF1:   	MOV BUF,11H						;写’P’
        	MOV BUF+1,10H
        	MOV BUF+2,10H
        	MOV BUF+3,10H
        	MOV BUF+4,10H
        	MOV BUF+5,10H
        	RET
CODE ENDS
END  START
