CODE 		SEGMENT           			 ;H8255-1.ASM
ASSUME 	CS:CODE
IOCONPT 	EQU 0FF2BH			;����8255���ƿ�
IOBPT		EQU 0FF29H			;����8255 PB��
IOAPT		EQU 0FF28H			;����8255 PA��
ORG 11B0H                    ;�����11B0H��ʼ
START:
    MOV AL,90H						;����PA����,PB�����AL ��                                   ;����1001
	MOV DX,IOCONPT				;���ƿ�
	OUT DX,AL						;д������
	NOP								;��ʱ
	NOP
	NOP
IOLED1:   	
    MOV DX,IOAPT					;PA��
	IN AL,DX						;��PA��
	MOV DX,IOBPT					;PB��
	OUT DX,AL						;дPB��
	MOV CX,0FFFFH					;��ʱ
DELAY:	   	
    LOOP DELAY						
	JMP IOLED1						;ѭ��
CODE ENDS
    END  START
