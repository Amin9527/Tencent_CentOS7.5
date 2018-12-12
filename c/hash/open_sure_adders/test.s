	.file	"test.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"test.cc"
.LC1:
	.string	"&ht"
.LC2:
	.string	"len>0"
	.text
	.globl	_Z13initHashtableR9Hashtablei
	.type	_Z13initHashtableR9Hashtablei, @function
_Z13initHashtableR9Hashtablei:
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
	movl	$_ZZ13initHashtableR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$6, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L2:
	cmpl	$0, -28(%rbp)
	jg	.L3
	movl	$_ZZ13initHashtableR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$7, %edx
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
	.size	_Z13initHashtableR9Hashtablei, .-_Z13initHashtableR9Hashtablei
	.globl	_Z16destroyHashtableR9Hashtable
	.type	_Z16destroyHashtableR9Hashtable, @function
_Z16destroyHashtableR9Hashtable:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L9
	movl	$_ZZ16destroyHashtableR9HashtableE19__PRETTY_FUNCTION__, %ecx
	movl	$18, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L9:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movl	$0, 12(%rax)
	movq	-8(%rbp), %rax
	movl	12(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 8(%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_Z16destroyHashtableR9Hashtable, .-_Z16destroyHashtableR9Hashtable
	.globl	_Z13judgecapacityR9Hashtable
	.type	_Z13judgecapacityR9Hashtable, @function
_Z13judgecapacityR9Hashtable:
.LFB973:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	cmpq	$0, -56(%rbp)
	jne	.L11
	movl	$_ZZ13judgecapacityR9HashtableE19__PRETTY_FUNCTION__, %ecx
	movl	$27, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L11:
	movq	-56(%rbp), %rax
	movl	8(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movq	-56(%rbp), %rdx
	movl	12(%rdx), %ebx
	cltd
	idivl	%ebx
	cmpl	$6, %eax
	jle	.L10
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	addl	%eax, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z13initHashtableR9Hashtablei
	movl	$0, -20(%rbp)
	jmp	.L13
.L15:
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L14
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
.L14:
	addl	$1, -20(%rbp)
.L13:
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	-20(%rbp), %eax
	jg	.L15
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_Z16destroyHashtableR9Hashtable
	movq	-48(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, (%rax)
	movl	-36(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, 12(%rax)
	movl	-40(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, 8(%rax)
.L10:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	_Z13judgecapacityR9Hashtable, .-_Z13judgecapacityR9Hashtable
	.globl	_Z10sureaddersii
	.type	_Z10sureaddersii, @function
_Z10sureaddersii:
.LFB974:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-24(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE974:
	.size	_Z10sureaddersii, .-_Z10sureaddersii
	.section	.rodata
.LC3:
	.string	"key>=0"
	.text
	.globl	_Z15insertHashtableR9Hashtablei
	.type	_Z15insertHashtableR9Hashtablei, @function
_Z15insertHashtableR9Hashtablei:
.LFB975:
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
	jne	.L19
	movl	$_ZZ15insertHashtableR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$60, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L19:
	cmpl	$0, -28(%rbp)
	jns	.L20
	movl	$_ZZ15insertHashtableR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$61, %edx
	movl	$.LC0, %esi
	movl	$.LC3, %edi
	call	__assert_fail
.L20:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_Z13judgecapacityR9Hashtable
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	movl	-28(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z10sureaddersii
	movl	%eax, -4(%rbp)
	jmp	.L21
.L24:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %eax
	cmpl	-28(%rbp), %eax
	jne	.L22
	movq	-24(%rbp), %rax
	jmp	.L23
.L22:
	addl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	12(%rax), %ecx
	movl	-4(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%edx, -4(%rbp)
.L21:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L24
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	movl	-28(%rbp), %eax
	movl	%eax, 4(%rdx)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-24(%rbp), %rax
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	_Z15insertHashtableR9Hashtablei, .-_Z15insertHashtableR9Hashtablei
	.globl	_Z13eraseHashnodeR9Hashtablei
	.type	_Z13eraseHashnodeR9Hashtablei, @function
_Z13eraseHashnodeR9Hashtablei:
.LFB976:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	$2, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE976:
	.size	_Z13eraseHashnodeR9Hashtablei, .-_Z13eraseHashnodeR9Hashtablei
	.globl	_Z12findHashnodeR9Hashtablei
	.type	_Z12findHashnodeR9Hashtablei, @function
_Z12findHashnodeR9Hashtablei:
.LFB977:
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
	jne	.L28
	movl	$_ZZ12findHashnodeR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$85, %edx
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	__assert_fail
.L28:
	cmpl	$0, -28(%rbp)
	jns	.L29
	movl	$_ZZ12findHashnodeR9HashtableiE19__PRETTY_FUNCTION__, %ecx
	movl	$86, %edx
	movl	$.LC0, %esi
	movl	$.LC3, %edi
	call	__assert_fail
.L29:
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	movl	-28(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z10sureaddersii
	movl	%eax, -4(%rbp)
	jmp	.L30
.L34:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L31
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %eax
	cmpl	-28(%rbp), %eax
	jne	.L32
	movl	-4(%rbp), %eax
	jmp	.L33
.L32:
	addl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	12(%rax), %ecx
	movl	-4(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%edx, -4(%rbp)
	jmp	.L30
.L31:
	addl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	12(%rax), %ecx
	movl	-4(%rbp), %eax
	cltd
	idivl	%ecx
	movl	%edx, -4(%rbp)
.L30:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L34
	movl	$-1, %eax
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE977:
	.size	_Z12findHashnodeR9Hashtablei, .-_Z12findHashnodeR9Hashtablei
	.section	.rodata
.LC4:
	.string	" "
.LC5:
	.string	"["
.LC6:
	.string	"]"
	.text
	.globl	_Z14printHashtableR9Hashtable
	.type	_Z14printHashtableR9Hashtable, @function
_Z14printHashtableR9Hashtable:
.LFB978:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L36
.L39:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L37
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movl	4(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L38
.L37:
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC6, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L38:
	addl	$1, -4(%rbp)
.L36:
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	-4(%rbp), %eax
	jg	.L39
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE978:
	.size	_Z14printHashtableR9Hashtable, .-_Z14printHashtableR9Hashtable
	.globl	_Z7isemptyR9Hashtable
	.type	_Z7isemptyR9Hashtable, @function
_Z7isemptyR9Hashtable:
.LFB979:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	testl	%eax, %eax
	sete	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE979:
	.size	_Z7isemptyR9Hashtable, .-_Z7isemptyR9Hashtable
	.globl	_Z4sizeR9Hashtable
	.type	_Z4sizeR9Hashtable, @function
_Z4sizeR9Hashtable:
.LFB980:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_Z4sizeR9Hashtable, .-_Z4sizeR9Hashtable
	.globl	_Z4testR9Hashtable
	.type	_Z4testR9Hashtable, @function
_Z4testR9Hashtable:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$7, %esi
	movq	%rax, %rdi
	call	_Z13initHashtableR9Hashtablei
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_Z4testR9Hashtable, .-_Z4testR9Hashtable
	.section	.rodata
.LC7:
	.string	"97's adders is :"
.LC8:
	.string	"96's adders is :"
	.text
	.globl	main
	.type	main, @function
main:
.LFB982:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_Z4testR9Hashtable
	leaq	-32(%rbp), %rax
	movl	$97, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$67, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$23, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$17, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$35, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movl	$12, %esi
	movq	%rax, %rdi
	call	_Z15insertHashtableR9Hashtablei
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_Z14printHashtableR9Hashtable
	leaq	-32(%rbp), %rax
	movl	$97, %esi
	movq	%rax, %rdi
	call	_Z12findHashnodeR9Hashtablei
	movl	%eax, -4(%rbp)
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z13eraseHashnodeR9Hashtablei
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_Z14printHashtableR9Hashtable
	leaq	-32(%rbp), %rax
	movl	$96, %esi
	movq	%rax, %rdi
	call	_Z12findHashnodeR9Hashtablei
	movl	%eax, -4(%rbp)
	movl	$.LC8, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_Z14printHashtableR9Hashtable
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE982:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB991:
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
	jne	.L47
	cmpl	$65535, -8(%rbp)
	jne	.L47
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L47:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE991:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z13initHashtableR9Hashtablei, @function
_GLOBAL__sub_I__Z13initHashtableR9Hashtablei:
.LFB992:
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
.LFE992:
	.size	_GLOBAL__sub_I__Z13initHashtableR9Hashtablei, .-_GLOBAL__sub_I__Z13initHashtableR9Hashtablei
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13initHashtableR9Hashtablei
	.section	.rodata
	.align 32
	.type	_ZZ13initHashtableR9HashtableiE19__PRETTY_FUNCTION__, @object
	.size	_ZZ13initHashtableR9HashtableiE19__PRETTY_FUNCTION__, 36
_ZZ13initHashtableR9HashtableiE19__PRETTY_FUNCTION__:
	.string	"void initHashtable(Hashtable&, int)"
	.align 32
	.type	_ZZ16destroyHashtableR9HashtableE19__PRETTY_FUNCTION__, @object
	.size	_ZZ16destroyHashtableR9HashtableE19__PRETTY_FUNCTION__, 34
_ZZ16destroyHashtableR9HashtableE19__PRETTY_FUNCTION__:
	.string	"void destroyHashtable(Hashtable&)"
	.align 16
	.type	_ZZ13judgecapacityR9HashtableE19__PRETTY_FUNCTION__, @object
	.size	_ZZ13judgecapacityR9HashtableE19__PRETTY_FUNCTION__, 31
_ZZ13judgecapacityR9HashtableE19__PRETTY_FUNCTION__:
	.string	"void judgecapacity(Hashtable&)"
	.align 32
	.type	_ZZ15insertHashtableR9HashtableiE19__PRETTY_FUNCTION__, @object
	.size	_ZZ15insertHashtableR9HashtableiE19__PRETTY_FUNCTION__, 48
_ZZ15insertHashtableR9HashtableiE19__PRETTY_FUNCTION__:
	.string	"Hashtable& insertHashtable(Hashtable&, keytype)"
	.align 32
	.type	_ZZ12findHashnodeR9HashtableiE19__PRETTY_FUNCTION__, @object
	.size	_ZZ12findHashnodeR9HashtableiE19__PRETTY_FUNCTION__, 38
_ZZ12findHashnodeR9HashtableiE19__PRETTY_FUNCTION__:
	.string	"int findHashnode(Hashtable&, keytype)"
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
