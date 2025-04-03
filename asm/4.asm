extern printf
extern scanf

section .data
	scanf_format db "%d", 0
	max_printf_format db "Max element is %d", 10, 0

section .bss 
	arr resd 10
	max_elem resd 1

section .text
	global main

main:
	push rbp
	mov rbp, rsp
	
	mov rbx, 0
L1:
	cmp rbx, 10
	jae L1_END

	mov rdi, scanf_format
	lea rsi, [arr + 4 * rbx]
	call scanf

	inc rbx
	jmp L1
L1_END:
	mov rax, 0
	mov eax, [arr]
	mov rbx, 1
L2:
	cmp rbx, 10
	jae L2_END

	cmp eax, [arr + 4 * rbx]
	jl ASSIGN
	inc rbx
	jmp L2	

ASSIGN:
	mov eax, [arr + 4 * rbx]
	inc rbx
	jmp L2

L2_END:
	mov rdi, max_printf_format 
	movsx rsi, eax
	xor rax, rax 
	call printf

	mov rsp, rbp
	pop rbp
	
	xor rax, rax
	ret
