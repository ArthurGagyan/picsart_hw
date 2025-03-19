extern printf
extern scanf

section .data
    input_fmt db "%d", 0
    output_fmt db "Result: %d", 10, 0
    prompt_a db "Enter a: ", 0
    prompt_b db "Enter b: ", 0

section .bss
    a resd 1
    b resd 1
    result resd 1

section .text
    global main


main:
    push rbp
    mov rbp, rsp

    sub rsp, 16 ; Stack alignment

    ; Prompt for a
    mov rdi, prompt_a
    call printf

    ; Read a
    mov rdi, input_fmt
    mov rsi, a
    call scanf

    ; Prompt for b
    mov rdi, prompt_b
    call printf

    ; Read b
    mov rdi, input_fmt
    mov rsi, b
    call scanf

    ; Compute a^b using a loop
    mov eax, 1        
    mov ecx, [b]      
    cmp ecx, 0
    je print_result   

power_loop:
    imul eax, [a]     
    loop power_loop   

print_result:
    mov [result], eax 

    ; Print result
    mov rdi, output_fmt
    mov esi, [result]
    xor eax, eax
    call printf

    add rsp, 16  ; Restore stack alignment
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
