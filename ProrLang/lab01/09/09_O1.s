	.file	"09.cpp"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2237:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	leaq	44(%rsp), %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZNSirsERi                     // cin >> x
	movl	44(%rsp), %edx                 // edx = x
	movl	$123, %eax                     // счётчик = 123
	.p2align 3
.L2:
	subl	$1, %eax                       // счётчик--
	jne	.L2                            // пока не 0
	imull	$123, %edx, %edx               // edx = x * 123
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev2, Built by MSYS2 project) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
