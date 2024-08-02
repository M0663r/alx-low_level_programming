section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; Prepare the arguments for printf
    ; printf("Hello, Holberton")
    ; RDI = format string, RSI, RDX, RCX, R8, R9 = additional arguments (none here)

    mov rdi, hello      ; First argument: format string
    xor rax, rax        ; Clear RAX to indicate no variadic arguments

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60         ; System call number for exit
    xor rdi, rdi        ; Exit status 0
    syscall
