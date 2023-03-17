CODE        SEGMENT             ;H0809.ASM  
ASSUME  CS:CODE  
ADPORT  EQU 0FF80h  
PA      EQU 0FF20H      ;字位口  
PB      EQU 0FF21H      ;字形口  
PC      EQU 0FF22H      ;键入口  
       ORG 1000H  
START:      JMP START0  
BUF         DB ?,?,?,?,?,?  
data1:      ;字形代码表  
db0c0h,0f9h,0a4h,0b0h,99h,92h,82h,0f8h,80h,90h,88h,83h,0c6h,0a1h  
       db 86h,8eh,0ffh,0ch,89h,0deh,0c7h,8ch,0f3h,0bfh,8FH  
START0:     CALL BUF1               ;显示缓冲区写初值  
ADCON:      MOV AX,00               ;选择通道0  
                MOV DX,ADPORT           ;0809端口地址  
                OUT DX,AL               ;启动AD转换  
                MOV CX,0500H            ;延时,等待AD转换结束  
;DELAY:     LOOP DELAY  
            MOV DX,ADPORT  
            IN AL,DX                ;读AD转换值  
            CALL CONVERS            ;AD转换值拆送显示缓冲区  
            CALL DISP               ;显示子程序  
            JMP ADCON               ;循环继续  
CONVERS:    MOV AH,AL               ;拆送显示缓冲区子程序  
                AND AL,0FH              ;取数据低位  
                MOV BX,OFFSET BUF       ;显示缓冲区首址  
            MOV [BX+5],AL           ;低位刷新  
            MOV AL,AH               ;高位数据  
            AND AL,0F0H           
            MOV CL,04H  
            SHR AL,CL               ;取高位数据  
            MOV [BX+4],AL           ;刷新高位数据  
            RET  
DISP:       MOV AL,0FFH        ; 显示子程序注释略，见实验六显示程序  
        MOV DX,PA  
        OUT DX,AL  
        MOV CL,0DFH         ;20H      
        MOV BX,OFFSET BUF  
DIS1:       MOV AL,[BX]  
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
DIS2:       MOV CX,00A0H  
                LOOP $  
                POP CX  
        CMP CL,0FEH                      ;01H  
        JZ LX1  
        INC BX  
        ROR CL,1                         ;SHR CL,1  
        JMP DIS1  
LX1:        MOV AL,0FFH  
        MOV DX,PB  
        OUT DX,AL  
        RET  
BUF1:       MOV BUF,00H  
            MOV BUF+1,08H  
            MOV BUF+2,00H  
            MOV BUF+3,09H  
            MOV BUF+4,00H  
            MOV BUF+5,00H  
            RET  
CODE ENDS  
END  START  