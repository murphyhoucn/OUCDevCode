CODE 		SEGMENT            	;H0832-1.ASM
ASSUME 	CS:CODE				;�����
DAPORT  EQU 0FF80h	;����0832�˿ڵ�ַ
 		ORG 10D0h				;�������
START:    	MOV AL,0FFH			;����DAת������
 		MOV CX,0800H			;���θ���
DACON1:   	MOV DX,DAPORT			;д0832�˿ڵ�ַ
       OUT DX,AL				;����DAת��
       PUSH CX				;ѹջ
       MOV CX,0400H			;��ʱ	
       LOOP $
       POP CX					;��ջ
       NOT AL					;����DAת�����ݷ���
       LOOP DACON1			;δ�����
;---------------------
       MOV DX,DAPORT			; д0832�˿ڵ�ַ
       MOV AL,00H				;����DAת������
       MOV CX,0008H			;���θ���
       MOV BX,0FFFFH			;���θ���
DACON2:   	OUT DX,AL				;����DAת��
       INC AL					;DAת�����ݼ�1
       DEC BX
       CMP BX,0000H			;δ�����
       JNZ DACON2
       LOOP DACON2			;δ�����
       JMP START				;ѭ������
CODE ENDS
END  START
