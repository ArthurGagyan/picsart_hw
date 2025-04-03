extern printf
extern scanf

section .data
    prompt1 db "Enter the first number: ", 0
    prompt2 db "Enter the second number: ", 0
    prompt3 db "Enter the operation code: ", 0
    fmt_int db "%d", 0
    fmt_char db " %c", 0
    fmt_output db "Result = %d", 10, 0
    error_msg db "Error", 10, 0

section .bss
    num1 resq 1
    num2 resq 1
    opcode resb 1
    result resq 1

section .text
    global main

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16 ; Align stack 

    ; Prompt for first number
    mov rdi, prompt1
    xor eax, eax
    call printf

    mov rdi, fmt_int
    mov rsi, num1
    xor eax, eax
    call scanf

    ; Prompt for second number
    mov rdi, prompt2
    xor eax, eax
    call printf

    mov rdi, fmt_int
    mov rsi, num2
    xor eax, eax
    call scanf

    ; Prompt for operation code
    mov rdi, prompt3
    xor eax, eax
    call printf

    mov rdi, fmt_char
    mov rsi, opcode
    xor eax, eax
    call scanf

    ; Load values into registers
    mov rax, [num1]
    mov rbx, [num2]
    mov cl, [opcode]

    ; Compare opcode and perform the operation
    cmp cl, '+'
    je addition
    cmp cl, '-'
    je subtraction
    cmp cl, '*'
    je multiplication
    cmp cl, '/'
    je division
    jmp end_program

addition:
    add rax, rbx
    mov [result], rax
    jmp print_result

subtraction:
    sub rax, rbx
    mov [result], rax
    jmp print_result

multiplication:
    imul rbx
    mov [result], rax
    jmp print_result

division:
    cmp rbx, 0
    je div_by_zero
    cqo  
    idiv rbx
    mov [result], rax
    jmp print_result

div_by_zero:
    mov rdi, error_msg
    xor eax, eax
    call printf
    jmp end_program

print_result:
    mov rdi, fmt_output
    mov rsi, [result]
    xor eax, eax
    call printf

end_program:
    add rsp, 16  ; Restore stack alignment
    pop rbp
    mov rax, 0
    ret
