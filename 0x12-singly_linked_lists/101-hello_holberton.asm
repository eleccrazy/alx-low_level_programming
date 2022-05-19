; Desc: Assembly program to print "Hello, Holberton" string.

; File: 101-hello_holberton.asm

; Author: Gizachew Bayness (eleccrazy)

; Date Created: May 19, 2022

extern printf

section .text
global main


main:

push rbp
mov rdi, format
mov rsi, msg
mov rax, 0
call printf

pop rbp
mov rax, 0
ret

section .rodata
msg: db "Hello, Holberton", 0
format: db "%s", 10, 0
