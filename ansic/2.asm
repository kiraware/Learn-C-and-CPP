section .data
section .bss

section .text

global Start

start:

xor eax, eax
mov ebx, 1

test eax, ebx
test eax, eax
test ebx, ebx