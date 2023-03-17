   	ORG 0000H
	LJMP PO10
	ORG 0013H
	LJMP PO16
	ORG 0190H
PO10:		MOV P1,#7FH
		ORL P3,#00H
PO11:		JNB P3.4,PO11             ；开工吗?
	ORL IE,#84H
	ORL IP,#04H
	MOV PSW,#00H              ；初始化
	MOV SP,#53H
PO12:		MOV P1,#7EH               ；第一道工序
		ACALL PO1B
		MOV P1,#7DH               ；第二道工序
		ACALL PO1B
		MOV P1,#7BH               ；第三道工序
		ACALL PO1B
		MOV P1,#77H               ；第四道工序
	ACALL PO1B
	MOV P1,#6FH               ；第五道工序
	ACALL PO1B
	MOV P1,#5FH               ；第六道工序
	ACALL PO1B
	MOV P1,#0FH               ；第七道工序
	ACALL PO1B
	SJMP PO12
PO16:		MOV B,R2                  ；保护现场
PO17:		MOV P1,#7FH               ；关输出
		MOV 20H,#0A0H             ；振荡次数
PO18:		SETB P1.7                 ；振荡
	ACALL PO1A                ；延时
	CLR P1.7                  ；停振
	ACALL PO1A                ；延时
	DJNZ 20H,PO18             ；不为0转
	CLR P1.7
	ACALL PO1A                ；停振
	JNB P3.3,PO17              ；故障消除吗?
	MOV R2,B                   ；恢复现场
	RETI
PO19:		MOV R2,#10H
		ACALL DELY                 ；延时1
		RET
PO1A:		MOV R2,#06H
		ACALL DELY                 ；延时2
		RET
PO1B:		MOV R2,#30H
		ACALL DELY                 ；延时3
		RET
	
DELY:		PUSH 02H
DEL2:		PUSH 02H
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
