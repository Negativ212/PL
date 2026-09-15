	movl	$0, -8(%rbp)	         // i = 0
.L3:
	cmpl	$122, -8(%rbp) 		 // i <= 122
	jg	.L2
	movl	-12(%rbp), %eax          // eax = s
	addl	%eax, -4(%rbp)           // eax+= s
	addl	$1, -8(%rbp)             // i+=1
	jmp	.L3
.L2:                                     // s = eax
