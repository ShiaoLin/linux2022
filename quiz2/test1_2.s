	.file	"test1_2.c"
	.text
	.globl	average
	.type	average, @function
average:
.LFB0:
	.cfi_startproc
	endbr64
	movl	%edi, %eax
	shrl	%eax
	movl	%esi, %edx
	shrl	%edx
	addl	%edx, %eax
	andl	%esi, %edi
	andl	$1, %edi
	addl	%edi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	average, .-average
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
