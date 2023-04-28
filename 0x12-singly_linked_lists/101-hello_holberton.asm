%include "stdio.h"

extern printf

section .data
	msg db "Hello, Holberton", 10, 0
section .text
	global main
main:
	push msg
	call printf
	add rsp, 8
	xor eax, eax
	ret
