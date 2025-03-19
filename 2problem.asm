extern printf
extern scanf

section .data
    prompt db "Enter N: ", 0
    error_msg db "Please enter a positive integer.", 10, 0
    fmt_int db "%d", 0
    fmt_output db "Sum = %d", 10, 0

section .bss
    N resq 1
    sum resq 1
    i resq 1

section .text
    global main

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16  ; Align stack

    ; Prompt for input
    mov rdi, prompt
    xor eax, eax
    call printf

    ; Read integer N
    mov rdi, fmt_int
    mov rsi, N
    xor eax, eax
    call scanf

    ; Check if N < 1
    mov rax, [N]
    cmp rax, 1
    jge start_loop

    ; Print error message
    mov rdi, error_msg
    xor eax, eax
    call printf
    jmp end_program

start_loop:
    mov qword [sum], 0  
    mov qword [i], 1    

loop_start:
    mov rax, [i]
    cmp rax, [N]
    jg print_result  

    add [sum], rax  
    inc qword [i]   

    jmp loop_start  

print_result:
    mov rdi, fmt_output
    mov rsi, [sum]
    xor eax, eax
    call printf

end_program:
    add rsp, 16  ; Restore stack
    pop rbp
    mov rax, 0
    ret
