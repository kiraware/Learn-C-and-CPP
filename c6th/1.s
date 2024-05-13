	.file	"1.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Type int has a size of %zd bytes.\12\0"
	.align 4
LC1:
	.ascii "Type char has a size of %zd bytes.\12\0"
	.align 4
LC2:
	.ascii "Type long has a size of %zd bytes.\12\0"
	.align 4
LC3:
	.ascii "Type long long has a size of %zd bytes.\12\0"
	.align 4
LC4:
	.ascii "Type double has a size of %zd bytes.\12\0"
	.align 4
LC5:
	.ascii "Type long double has a size of %zd bytes.\12\0"
	.align 4
LC6:
	.ascii "Type int has a size of %d bytes.\12\0"
LC7:
	.ascii "%d  %d  %d  \0"
LC8:
	.ascii "%lu   %uluu     %llu\0"
	.text
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
	movl	$4, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$1, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$12, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	$4, 12(%esp)
	movl	$4, 8(%esp)
	movl	$4, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	movl	$-1486618624, 12(%esp)
	movl	$232830643, 16(%esp)
	movl	$100000000, 8(%esp)
	movl	$100000000, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC-8.2.0-5) 8.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
