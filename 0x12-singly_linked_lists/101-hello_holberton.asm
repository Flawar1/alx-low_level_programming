section .data
	hello db 'Hello, Holberton', 0x0A

SECTION .text
	extern printf
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 16
	syscall

	; Exit the program
	mov rax, 60
	xor rdi, rdi
	syscall

