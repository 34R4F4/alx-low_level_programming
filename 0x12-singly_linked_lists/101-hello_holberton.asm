section .data
    hello db 'Hello, Holberton', 0  ; Null-terminated string

section .text
    global main

    extern printf
    extern exit

main:
    mov rdi, hello        ; Format string
    call printf           ; Call printf function
    mov rdi, 0            ; Exit code 0
    call exit             ; Call exit function

