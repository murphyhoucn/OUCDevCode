CODE        SEGMENT             ;H0809.ASM  
ASSUME  CS:CODE  
ADPORT  EQU 0FF80h  
PA      EQU 0FF20H      ;��λ��  
PB      EQU 0FF21H      ;���ο�  
PC      EQU 0FF22H      ;�����  
       ORG 1000H  
START:      JMP START0  
BUF         DB ?,?,?,?,?,?  
data1:      ;���δ����  
db0c0h,0f9h,0a4h,0b0h,99h,92h,82h,0f8h,80h,90h,88h,83h,0c6h,0a1h  
       db 86h,8eh,0ffh,0ch,89h,0deh,0c7h,8ch,0f3h,0bfh,8FH  
START0:     CALL BUF1               ;��ʾ������д��ֵ  
ADCON:      MOV AX,00               ;ѡ��ͨ��0  
                MOV DX,ADPORT           ;0809�˿ڵ�ַ  
                OUT DX,AL               ;����ADת��  
                MOV CX,0500H            ;��ʱ,�ȴ�ADת������  
;DELAY:     LOOP DELAY  
            MOV DX,ADPORT  
            IN AL,DX                ;��ADת��ֵ  
            CALL CONVERS            ;ADת��ֵ������ʾ������  
            CALL DISP               ;��ʾ�ӳ���  
            JMP ADCON               ;ѭ������  
CONVERS:    MOV AH,AL               ;������ʾ�������ӳ���  
                AND AL,0FH              ;ȡ���ݵ�λ  
                MOV BX,OFFSET BUF       ;��ʾ��������ַ  
            MOV [BX+5],AL           ;��λˢ��  
            MOV AL,AH               ;��λ����  
            AND AL,0F0H           
            MOV CL,04H  
            SHR AL,CL               ;ȡ��λ����  
            MOV [BX+4],AL           ;ˢ�¸�λ����  
            RET  
DISP:       MOV AL,0FFH        ; ��ʾ�ӳ���ע���ԣ���ʵ������ʾ����  
        MOV DX,PA  
        OUT DX,AL  
        MOV CL,0DFH         ;20H      
        MOV BX,OFFSET BUF  
DIS1:       MOV AL,[BX]  
        MOV AH,00H  
    PUSH BX  
    MOV BX,OFFSET DATA1  
            ADD BX,AX  
            MOV AL,[BX]  
    POP BX  
    MOV DX,PB  
    OUT DX,AL  
    MOV AL,CL  
    MOV DX,PA  
    OUT DX,AL  
    PUSH CX  
DIS2:       MOV CX,00A0H  
                LOOP $  
                POP CX  
        CMP CL,0FEH                      ;01H  
        JZ LX1  
        INC BX  
        ROR CL,1                         ;SHR CL,1  
        JMP DIS1  
LX1:        MOV AL,0FFH  
        MOV DX,PB  
        OUT DX,AL  
        RET  
BUF1:       MOV BUF,00H  
            MOV BUF+1,08H  
            MOV BUF+2,00H  
            MOV BUF+3,09H  
            MOV BUF+4,00H  
            MOV BUF+5,00H  
            RET  
CODE ENDS  
END  START  