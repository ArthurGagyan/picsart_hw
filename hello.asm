extern printf

section .data
	hello db "Hello, World!", 10, 0

section .text
    global main   
main:
	push  rbp	
        mov  rbp, rsp
	
	mov rax, 0
	mov rdi, hello

	call printf

	mov rsp, rbp
	pop rbp
	
	ret
 

