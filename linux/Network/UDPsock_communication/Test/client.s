	.file	"client.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"argc error!"
.LC1:
	.string	"socket"
.LC2:
	.string	"send to server: "
.LC3:
	.string	"recvfrom error!"
.LC4:
	.string	"The server sya: "
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
	subq	$2112, %rsp
	movl	%edi, -2100(%rbp)
	movq	%rsi, -2112(%rbp)
	cmpl	$3, -2100(%rbp)
	je	.L2
	movl	$.LC0, %edi
	call	perror
	movl	$0, %edi
	call	exit
.L2:
	leaq	-32(%rbp), %rax
	movl	$16, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	movw	$2, -32(%rbp)
	movq	-2112(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	inet_addr
	movl	%eax, -28(%rbp)
	movq	-2112(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi
	movzwl	%ax, %eax
	movl	%eax, %edi
	call	htons
	movw	%ax, -30(%rbp)
	movl	$0, %edx
	movl	$2, %esi
	movl	$2, %edi
	call	socket
	cmpl	$-1, %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	setne	%al
	testb	%al, %al
	je	.L3
	movl	$.LC1, %edi
	call	perror
	movl	$1, %edi
	call	exit
.L3:
	movl	$16, -36(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-1072(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	movl	-36(%rbp), %ecx
	leaq	-32(%rbp), %rdx
	leaq	-1072(%rbp), %rsi
	movl	-4(%rbp), %eax
	movl	%ecx, %r9d
	movq	%rdx, %r8
	movl	$0, %ecx
	movl	$1023, %edx
	movl	%eax, %edi
	call	sendto
	leaq	-36(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	leaq	-2096(%rbp), %rsi
	movl	-4(%rbp), %eax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movl	$0, %ecx
	movl	$1023, %edx
	movl	%eax, %edi
	call	recvfrom
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jns	.L4
	movl	$.LC3, %edi
	call	perror
	movl	$4, %edi
	call	exit
.L4:
	movl	-8(%rbp), %eax
	cltq
	movb	$0, -2096(%rbp,%rax)
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-2096(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	jmp	.L3
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
	jne	.L5
	cmpl	$65535, -8(%rbp)
	jne	.L5
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L5:
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
