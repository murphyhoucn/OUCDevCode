;DOS有很多中断子程序，其中21号中断的编号为9的功能就可以打印字符串到DOS。

DATA SEGMENT
        STRING DB 'HELLO WORLD!', 13, 10, '$'
        ;13是回车    
        ;10是换行    
        ;'$'表示已经到了字符串尾，不在打印字符了。
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:  
    MOV AX, DATA
    MOV DS, AX
    ;其实就是把DATA转到 DS 数据段寄存器，让数据段指向正确的位置。
    ;DATA不是指令，而是伪指令，实际上是一个动态的内存地址，要想运行，必须先放入到DS中，但是内存数不能放入段地址。
    ;MOV AX,DATA起到过渡作用

    MOV DX, OFFSET STRING ;获得字符串的偏移地址
    
    MOV AH, 09H
    INT 21H ;INT 21H是指令自动转入中断子程序的入口

    ;调用9号DOS功能（显示字符串 ）
    MOV AH, 4CH
    INT 21H
    ;调用程序结束功能
CODE ENDS
    END START 