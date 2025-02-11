	.file	"2ex.c"
	.text
	.globl	NOK
	.def	NOK;	.scl	2;	.type	32;	.endef
	.seh_proc	NOK
NOK:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	cltd
	idivl	24(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	movl	-4(%rbp), %eax
	jmp	.L4
.L3:
	movl	16(%rbp), %eax
	addl	%eax, -4(%rbp)
.L2:
	movl	16(%rbp), %eax
	imull	24(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L5
	movl	$0, %eax
.L4:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "Enter x: \0"
.LC1:
	.ascii "%d\0"
.LC2:
	.ascii "Enter y: \0"
.LC3:
	.ascii "NOK of x and y: %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-4(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-8(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	NOK
	movl	%eax, %edx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev3, Built by MSYS2 project) 14.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
