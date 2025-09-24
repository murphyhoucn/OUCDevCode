CODE SEGMENT

;将1000H开始存放的4个压缩BCD码转换为ASCII码存放到3000H开始的单元中去
START:
    MOV SI,1000H
    MOV DI,3000H
    MOV CX,4

NEXT:
    MOV AL,[SI] ;
    MOV BL,AL
    AND AL,0FH
    OR AL,30H
    MOV [DI],AL
    INC DI
    MOV AL,BL
    PUSH CX
    MOV CL,4
    SHR AL,CL
    OR AL,30H
    MOV [DI],AL
    INC DI
    INC SI
    POP CX
    DEC CX
    JNZ NEXT

    HLT
    
CODE ENDS

    END