ORG 0000H
	LJMP SE18
	ORG 0790H
SE18:	   	MOV P1,#0FFH              ；送P1口
LO34:	   	MOV A,#0FEH               ；L1发光二极管点亮
LO33:	   	MOV P1,A
	LCALL SE19                ；延时
	RL A                      ；左移位
	SJMP LO33                 ；循环
	ORG 07A0H
SE19: 	   	MOV R6,#0A0H
LO36:    	MOV R7,#0FFH
LO35:	   	DJNZ R7,LO35
	   	DJNZ R6,LO36                ；延时
       RET
       END
