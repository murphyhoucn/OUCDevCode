CODE SEGMENT

    MOV DI,1000H
    MOV CX,05H
    MOV AL,2AH

;循环CX次，该题中是循环5次，那么就是地址从1000-1004，这五个内存单元的内容变成2AH
AGAIN:
    MOV [DI],AL
    INC DI
    DEC CX
    JNZ AGAIN

    HLT
CODE ENDS

    END