CODE 		SEGMENT           			 ;H8255-1.ASM
ASSUME 	CS:CODE
IOCONPT 	EQU 0FF2BH			;定义8255控制口
IOBPT		EQU 0FF29H			;定义8255 PB口
IOAPT		EQU 0FF28H			;定义8255 PA口
ORG 11B0H                    ;程序从11B0H开始
START:
    MOV AL,90H						;定义PA输入,PB输出，AL 中                                   ;存入1001
	MOV DX,IOCONPT				;控制口
	OUT DX,AL						;写命令字
	NOP								;延时
	NOP
	NOP
IOLED1:   	
    MOV DX,IOAPT					;PA口
	IN AL,DX						;读PA口
	MOV DX,IOBPT					;PB口
	OUT DX,AL						;写PB口
	MOV CX,0FFFFH					;延时
DELAY:	   	
    LOOP DELAY						
	JMP IOLED1						;循环
CODE ENDS
    END  START
