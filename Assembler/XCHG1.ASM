CODE SEGMENT

    ;实现数据交换

    
    ;MOV AL,12H
    ;MOV BL,34H

    ;XCHG AL,BL

    ;MOV AX,1234H
    ;MOV BX,5678H

    ;XCHG AX,BX

    MOV DI,2530H

    MOV [DI],12H
    MOV [DI+1],34H

    MOV CX,5678H

    XCHG [DI],CX
    
CODE ENDS

    END