ORG 0000H
	LJMP SE18
	ORG 0790H
SE18:	   	MOV P1,#0FFH              ����P1��
LO34:	   	MOV A,#0FEH               ��L1��������ܵ���
LO33:	   	MOV P1,A
	LCALL SE19                ����ʱ
	RL A                      ������λ
	SJMP LO33                 ��ѭ��
	ORG 07A0H
SE19: 	   	MOV R6,#0A0H
LO36:    	MOV R7,#0FFH
LO35:	   	DJNZ R7,LO35
	   	DJNZ R6,LO36                ����ʱ
       RET
       END
