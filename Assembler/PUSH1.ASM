STACKS SEGMENT PARA STACK 'STACK'
        DW 256 DUP(?) ;堆栈只能是一个字一个字的操作,多预留点栈空间
STACKS ENDS

CODES SEGMENT
    ASSUME CS:CODES,SS:STACKS
START:
    MOV AX,STACKS  ;这里就用STACKS,以前都是DATAS
    MOV SS,AX      ;这里就用SS了，以前都是用DS
    MOV CX,10   ;输入10个字符=>堆栈
READ:
    MOV AH,01H
    INT 21H
    PUSH AX    ;堆栈操作都是‘字’，不能用AL，浪费了AH的空间
    LOOP READ  ;读10个字符

    MOV DL,0AH  ;显示回车
    MOV AH,02H
    INT 21H
    MOV DL,0DH  ;显示换行
    INT 21H

    MOV CX,10   ;从栈顶依次弹出10个字符输出
DISP:
    POP DX      ;显示
    MOV AH,02H
    INT 21H
    LOOP DISP  ;显示10个字符

    MOV AH,4CH
    INT 21H
CODES ENDS
    END START