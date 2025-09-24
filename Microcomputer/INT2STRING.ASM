;整数转为字符串
;待转化的整数存放在AX 中，字符串存放在DS[DI] 中。
;首先AX 对 10 取余，入栈。
;然后出栈，转移到BUF 中。
;这里要注意如果是负数，必须给出判断条件，并将缓冲区第一个位置设置’-‘。

DATA SEGMENT
        BUF DB 16 DUP(0), 13, 10, '$'
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:  MOV AX, DATA
        MOV DS, AX
        MOV DI, OFFSET BUF
        XOR AX, AX
        MOV AL, -23
        MOV BX, 10
        MOV CX, 0
        CMP AX, 127             
        JLE MODLP
        NEG AL
        MOV BYTE PTR [DI], '-'  
        INC DI                  
MODLP:  XOR DX, DX
        DIV BX
        ADD DX, 30H
        PUSH DX
        INC CX
        CMP AX, 0
        JG MODLP
STOLP:  POP DX
        MOV [DI], DL
        INC DI
        LOOP STOLP

        MOV DX, OFFSET BUF
        MOV AH, 09H
        INT 21H
        MOV AH, 4CH
        INT 21H

CODE ENDS 
    END START