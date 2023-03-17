ORG 0000H
			LJMP PX00
			ORG 0C30H
PX00: 		MOV P1,#0FFH              ；初始化
PX03:   	MOV A,P1
			MOV B,A
			ANL A,#03H
	CJNE A,#01H,PX01          ；满足只是P1.0为高条件?
	JB 00H,PX04               ；闪烁标志位
	CLR P1.4
	CLR P1.5                  ；开右灯
	SETB P1.6
	SETB P1.7                 ；关左灯
	MOV R2,#20H
	LCALL DELY                ；延时
	SETB 00H                   ；置标志位
	LJMP PX03                  ；继续查找状态
PX04:		SETB P1.4
	SETB P1.5
	SETB P1.6                  ；关灯
	SETB P1.7
	MOV R2,#20H
	LCALL DELY                 ；延时
	   	CLR 00H                    ；清标志位
	AJMP PX03                  ；继续查找状态
PX01: 		CJNE A,#02H,PX02           ；满足只是P1.1为高条件吗?
	JB 01H,PX05                ；判标志位
	SETB P1.4
	SETB P1.5                  ；开左灯
	CLR P1.6
	CLR P1.7                   ；关右灯
	MOV R2,#20H
	LCALL DELY                 ；延时
	SETB 01H                   ；置标志位
	LJMP PX03                  ；继续查找
PX05:	   SETB P1.4
	SETB P1.5
	SETB P1.6                  ；关灯
		SETB P1.7
		MOV R2,#20H
		LCALL DELY                 ；延时
		CLR 01H                    ；清标志位
		LJMP PX03                  ；继续查找状态
PX02:  	SETB P1.4
		SETB P1.5
		SETB P1.6                  ；关灯
		SETB P1.7
		LJMP PX03                  ；继续
	
DELY:  	PUSH 02H
DEL2:  	PUSH 02H
DEL3:		PUSH 02H                   ；延时
DEL4:		DJNZ R2,DEL4
		POP 02H
		DJNZ R2,DEL3
		POP 02H
		DJNZ R2,DEL2
		POP 02H
		DJNZ R2,DELY
		RET
		END
