global main
extern printf

section .text
main:
    mov     edi, string
    mov     eax, 0
    call    printf

section .data
string db "Hello, Holberton", 10, 0
