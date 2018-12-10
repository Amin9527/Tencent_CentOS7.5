	.file	"test.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"test.cc"
.LC1:
	.string	"ht"
.LC2:
	.string	"len>0"
	.text
	.globl	_Z13initHashtableP9Hashtablei
	.type	_Z13initHashtableP9Hashtablei, @function
_Z13initHashtableP9Hashtablei:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	movl	$_ZZ13initHashtableP9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$5, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L2:
	cmpl	$0, -28(%rbp)
	jg	.L3
	movl	$_ZZ13initHashtableP9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$6, %edx
	movl	$.LC0, %esi
	movl	$.LC2, %edi
	call	__assert_fail
.L3:
	movl	-28(%rbp), %eax
	cltq
	salq	$3, %rax
	movabsq	$1143914305352105984, %rdx
	cmpq	%rdx, %rax
	ja	.L4
	salq	$3, %rax
	jmp	.L5
.L4:
	movq	$-1, %rax
.L5:
	movq	%rax, %rdi
	call	_Znam
	movq	-24(%rbp), %rdx
	movq	%rax, (%rdx)
	movq	-24(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 12(%rax)
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	$1, (%rax)
	addl	$1, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L7
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	_Z13initHashtableP9Hashtablei, .-_Z13initHashtableP9Hashtablei
	.section	.rodata
.LC3:
	.string	" "
	.text
	.globl	_Z4testP9Hashtable
	.type	_Z4testP9Hashtable, @function
_Z4testP9Hashtable:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	_Z13initHashtableP9Hashtablei
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	addq	$48, %rax
	movl	(%rax), %eax
	movl	%eax, %ebx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movl	(%rax), %eax
	movl	%eax, %r12d
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%r12d, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_Z4testP9Hashtable, .-_Z4testP9Hashtable
	.globl	main
	.type	main, @function
main:
.LFB973:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z4testP9Hashtable
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB982:
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
	jne	.L11
	cmpl	$65535, -8(%rbp)
	jne	.L11
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE982:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z13initHashtableP9Hashtablei, @function
_GLOBAL__sub_I__Z13initHashtableP9Hashtablei:
.LFB983:
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
.LFE983:
	.size	_GLOBAL__sub_I__Z13initHashtableP9Hashtablei, .-_GLOBAL__sub_I__Z13initHashtableP9Hashtablei
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13initHashtableP9Hashtablei
	.section	.rodata
	.align 32
	.type	_ZZ13initHashtableP9HashtableiE19__PRETTY_FUNCTION__, @object
	.size	_ZZ13initHashtableP9HashtableiE19__PRETTY_FUNCTION__, 36
_ZZ13initHashtableP9HashtableiE19__PRETTY_FUNCTION__:
	.string	"void initHashtable(Hashtable*, int)"
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
