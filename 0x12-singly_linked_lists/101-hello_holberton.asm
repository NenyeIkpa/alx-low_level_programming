; Writes "Hello, Holberton" to the console using only system calls. Runs on 64-bit macOS only.
; To assemble and run: nasm -fmacho64 hello.asm && ld hello.o && ./a.out

          global    start

          section   .text
_start:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg      ;   "Hello, Holberton!\n",
  mov rdx, msglen   ;   sizeof("Hello, Holberton!\n")
  syscall           ; );

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, Holberton!", 10
  msglen: equ $ - msg
