data segment
    sum equ 10
    fib dw sum dup(1)
data ends
code segment
    assume cs:code,ds:data
start: mov ax,data
    mov ds,ax
    MOV SI,OFFSET fib
    mov bx,sum    
    sub bx,1
    mov cx,bx
    mov ax,1
    mov bx,1
    mov di,0
do:
    mov fib[di],ax
    mov si,ax
    add ax,bx
    mov bx,si
    inc di
    loop do
    mov ah,4ch
    int 21h
code ends
    end start
