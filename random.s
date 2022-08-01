	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	-4(%rbp), %rax
	movq	%rax, -16(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -20(%rbp)                 ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	-16(%rbp), %rcx
	movl	(%rcx), %esi
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -24(%rbp)                 ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%edx, %edx
	movl	%eax, -28(%rbp)                 ## 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter a number:"

L_.str.1:                               ## @.str.1
	.asciz	"%d"

L_.str.2:                               ## @.str.2
	.asciz	"%d\n"

.subsections_via_symbols
