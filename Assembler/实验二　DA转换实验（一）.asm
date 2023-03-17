CODE 		SEGMENT            	;H0832-1.ASM
ASSUME 	CS:CODE				;代码段
DAPORT  EQU 0FF80h	;定义0832端口地址
 		ORG 10D0h				;程序入口
START:    	MOV AL,0FFH			;设置DA转换数据
 		MOV CX,0800H			;波形个数
DACON1:   	MOV DX,DAPORT			;写0832端口地址
       OUT DX,AL				;启动DA转换
       PUSH CX				;压栈
       MOV CX,0400H			;延时	
       LOOP $
       POP CX					;出栈
       NOT AL					;设置DA转换数据反码
       LOOP DACON1			;未完继续
;---------------------
       MOV DX,DAPORT			; 写0832端口地址
       MOV AL,00H				;设置DA转换数据
       MOV CX,0008H			;波形个数
       MOV BX,0FFFFH			;波形个数
DACON2:   	OUT DX,AL				;启动DA转换
       INC AL					;DA转换数据加1
       DEC BX
       CMP BX,0000H			;未完继续
       JNZ DACON2
       LOOP DACON2			;未完继续
       JMP START				;循环继续
CODE ENDS
END  START
