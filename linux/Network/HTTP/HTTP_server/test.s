	.file	"test.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"main error!"
.LC1:
	.string	"socket error!"
.LC2:
	.string	"bind error!"
.LC3:
	.string	"listen error"
.LC4:
	.string	"accept error!"
.LC5:
	.string	"read error!"
.LC6:
	.string	"[request]: "
.LC7:
	.string	"<h1>hello world</h1>"
	.align 8
.LC8:
	.string	"HTTP/1.0 504 OK\nContent-Length:%lu\n\n%s"
	.text
	.globl	main
	.type	main, @function
main:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$11360, %rsp
	movl	%edi, -11348(%rbp)
	movq	%rsi, -11360(%rbp)
	cmpl	$3, -11348(%rbp)
	je	.L2
	movl	$.LC0, %edi
	call	perror
	movl	$0, %edi
	call	exit
.L2:
	movw	$2, -48(%rbp)
	movq	-11360(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	inet_addr
	movl	%eax, -44(%rbp)
	movq	-11360(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	htons
	movw	%ax, -46(%rbp)
	movl	$0, %edx
	movl	$1, %esi
	movl	$2, %edi
	call	socket
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L3
	movl	$.LC1, %edi
	call	perror
	movl	$1, %edi
	call	exit
.L3:
	leaq	-48(%rbp), %rcx
	movl	-4(%rbp), %eax
	movl	$16, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	bind
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jns	.L4
	movl	$.LC2, %edi
	call	perror
	movl	$2, %edi
	call	exit
.L4:
	movl	-4(%rbp), %eax
	movl	$5, %esi
	movl	%eax, %edi
	call	listen
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jns	.L5
	movl	$.LC3, %edi
	call	perror
	movl	$3, %edi
	call	exit
.L5:
	leaq	-68(%rbp), %rdx
	leaq	-64(%rbp), %rcx
	movl	-4(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	accept
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jns	.L6
	movl	$.LC4, %edi
	call	perror
	jmp	.L5
.L6:
	leaq	-10320(%rbp), %rax
	movl	$10240, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	movl	$10239, %edx
	leaq	-10320(%rbp), %rcx
	movl	-12(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read
	movl	%eax, -16(%rbp)
	cmpl	$0, -16(%rbp)
	jns	.L8
	movl	$.LC5, %edi
	call	perror
	movl	$4, %edi
	call	exit
.L8:
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-10320(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	$.LC7, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	movq	%rax, %rdx
	movq	-24(%rbp), %rcx
	leaq	-11344(%rbp), %rax
	movl	$.LC8, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	sprintf
	leaq	-11344(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	movq	%rax, %rdx
	leaq	-11344(%rbp), %rcx
	movl	-12(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	write
	jmp	.L5
	.cfi_endproc
.LFE971:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB980:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L9
	cmpl	$65535, -8(%rbp)
	jne	.L9
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
