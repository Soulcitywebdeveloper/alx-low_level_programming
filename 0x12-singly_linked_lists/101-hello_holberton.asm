section .data
	format db 'Hello, Holberton',0Ah,0

section .text
	global _start

_start:
    ; Load the format string address into rdi
    mov rdi, format

    ; Call the printf function
    mov eax, 0
    call printf

    ; Exit the program
    mov eax, 60    ; System call number for exit
    xor edi, edi   ; Exit code 0
    syscall

section .bss
    resb 1

extern printf
