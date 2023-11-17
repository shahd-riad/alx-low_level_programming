section .data
    hello db 'Hello, Holberton\n',0

section .text
    global main

main:
    ; Prepare the arguments for printf
    mov rdi, hello
    call printf

    ; Exit the program
    mov eax, 60         ; syscall: exit
    xor edi, edi        ; status: 0
    syscall

section .text
    extern printf

