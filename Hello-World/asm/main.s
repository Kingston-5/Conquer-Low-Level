section .data   ; data section
    message db "Hello, World!", 0AH     ; the hex value 0AH is used as the next line character
    len equ $ -message      ; declare string length

section .text
    global _start


_start:
    ; to output the string we invoke sys_write (unsigned int, const char *, size_t)
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout
    mov ecx, message    ; const char *
    mov edx, len        ; size_t
    int 80h             ; system interrrupt

    ; for the return method we invoke sys_exit (int)
    mov eax, 1          ; sys_exit
    mov ebx, 0          ; int
    int 80h
