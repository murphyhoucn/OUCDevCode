CODE 		SEGMENT          	 		;S1.ASM-->BIN ADD
ASSUME 	CS:CODE
	ORG 2CA0H	             	 ;������ڵ�ַ
START: 	CLC
	MOV SI,4000H	         	;��������ַ
	MOV [SI],0ffffH			;���뱻����
	MOV [SI+2],0ffffH			; �������1
	MOV [SI+4],0ffffH			; �������2
	MOV AX,0000H				��AX����
	MOV [SI+102H],AX			��������Ԫ4102����
   	MOV AX,[SI]				��ȡ������
	ADD AX,[SI+2]				��������+����1
	ADC [SI+102H],0000		������λ��
	ADD AX,[SI+4]				�����Ӽ���2
	MOV [SI+100H],AX			��������λ
	ADC [SI+102H],0000		��������λ
	JMP $						������
CODE ENDS
END  START
