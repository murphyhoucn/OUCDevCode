CODE 		SEGMENT          	 		;S1.ASM-->BIN ADD
ASSUME 	CS:CODE
	ORG 2CA0H	             	 ;程序入口地址
START: 	CLC
	MOV SI,4000H	         	;被加数首址
	MOV [SI],0ffffH			;输入被加数
	MOV [SI+2],0ffffH			; 输入加数1
	MOV [SI+4],0ffffH			; 输入加数2
	MOV AX,0000H				；AX清零
	MOV [SI+102H],AX			；存结果单元4102清零
   	MOV AX,[SI]				；取被加数
	ADD AX,[SI+2]				；被加数+加数1
	ADC [SI+102H],0000		；带进位加
	ADD AX,[SI+4]				；连加加数2
	MOV [SI+100H],AX			；存结果低位
	ADC [SI+102H],0000		；存结果高位
	JMP $						；结束
CODE ENDS
END  START
