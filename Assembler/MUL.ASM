CODE SEGMENT

    ;操作数默认为AX，对AX隐含寻址，计算结果送到AX
    MOV AX,0010H
    MOV CX,0101H
    MUL CX
    
CODE ENDS

    END