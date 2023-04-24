section .data
    msg db 'Hello, Holberton', 0x0A ;
message to print, terminated with a new line character (0x0A)

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4          ; system call for write
    mov ebx, 1          ; file descriptor for stdout
    mov ecx, msg        ; message to print
    mov edx, 16         ; message length in bytes
    int 0x80            ; invoke the system call

    ; exit with status code 0
    mov eax, 1          ; system call for exit
    xor ebx, ebx        ; status code (0 = success)
    int 0x80            ; invoke the system call

