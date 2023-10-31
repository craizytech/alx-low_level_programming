section .data
	hello_fmt db "Hello, Eammon", 0xa, 0
	hello_arg dq 0

section .text
	global main
	extern printf

main:
	mov rdi, hello_fmt
	mov rax, 0
	call printf
	ret
