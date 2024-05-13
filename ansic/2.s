	.file	"2.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "1\0"
LC2:
	.ascii "2\0"
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	leal	28(%esp), %eax
	movl	$LC0, (%esp)
	movl	%eax, 4(%esp)
	movl	$0, 28(%esp)
	call	_scanf
	movl	28(%esp), %eax
	testl	%eax, %eax
	jne	L2
	movl	$LC1, (%esp)
	call	_puts
L3:
	leave
	.cfi_remember_state
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	xorl	%eax, %eax
	ret
L2:
	.cfi_restore_state
	movl	$LC2, (%esp)
	call	_puts
	jmp	L3
	.cfi_endproc
LFE13:
	.ident	"GCC: (i686-posix-dwarf-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
