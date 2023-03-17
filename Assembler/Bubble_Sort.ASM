ASSUME CS:CODE,DS:DATA

DATA SEGMENT
        BUF DB 12, 32, -2, 4, 0     ; NUMBER ARRAY BUFFER
        CNT DB $-BUF               ; COUNT FOR BUFFER
DATA ENDS

CODE SEGMENT

START:  
        MOV AX, DATA
        MOV DS, AX                  ; DATA SEGMENT
        MOV SI, OFFSET BUF          ; BUFFER INDEX
        MOV CL, CNT                 ; LOOP COUNT
        DEC CL
        MOV CH, 0
OUTER:                              ; OUTER LOOP
        MOV AL, [SI]                ; BUF[SI]
        PUSH CX
        MOV DI, SI                  ; BUFFER INDEX
INNER:                              ; INNER LOOP
        INC DI                      ; DI = SI + 1
        MOV DL, [DI]                ; BUF[DI]
        CMP AL, DL                  ; IF (BUF[SI] > BUF[DI])
        JLE CONT                    ; 
        XCHG AX, DX                 ; SWAP (BUF[SI], BUF[DI])
        MOV [SI], AL
        MOV [DI], DL
CONT:   LOOP INNER                  ; CONTINUE 
        POP CX
        INC SI
        LOOP OUTER

        MOV AH, 4CH
        INT 21H
CODE ENDS
END START