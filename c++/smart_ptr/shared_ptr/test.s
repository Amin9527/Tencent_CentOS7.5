	.file	"test.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	main
	.type	main, @function
main:
.LFB983:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA983
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movl	$20, %edi
.LEHB0:
	call	_Znam
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEC1EPi
.LEHE0:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8GetcountEv
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
.LEHB1:
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$5, (%rax)
	leaq	-48(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$2, (%rax)
	leaq	-48(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$0, (%rax)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE5PrintEv
	leaq	-48(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEC1ERKS0_
.LEHE1:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8GetcountEv
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
.LEHB2:
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-64(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$13, (%rax)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE5PrintEv
	leaq	-80(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEC1EPi
.LEHE2:
	leaq	-48(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB3:
	call	_ZN9SharedptrIiEaSERKS0_
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8GetcountEv
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-80(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$14, (%rax)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE5PrintEv
.LEHE3:
	movl	$0, %ebx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	movl	%ebx, %eax
	jmp	.L9
.L8:
	movq	%rax, %rbx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	jmp	.L4
.L7:
	movq	%rax, %rbx
.L4:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	jmp	.L5
.L6:
	movq	%rax, %rbx
.L5:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB4:
	call	_Unwind_Resume
.LEHE4:
.L9:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA983:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE983-.LLSDACSB983
.LLSDACSB983:
	.uleb128 .LEHB0-.LFB983
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB983
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L6-.LFB983
	.uleb128 0
	.uleb128 .LEHB2-.LFB983
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L7-.LFB983
	.uleb128 0
	.uleb128 .LEHB3-.LFB983
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L8-.LFB983
	.uleb128 0
	.uleb128 .LEHB4-.LFB983
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE983:
	.text
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"Sharedptr()"
	.section	.text._ZN9SharedptrIiEC2EPi,"axG",@progbits,_ZN9SharedptrIiEC5EPi,comdat
	.align 2
	.weak	_ZN9SharedptrIiEC2EPi
	.type	_ZN9SharedptrIiEC2EPi, @function
_ZN9SharedptrIiEC2EPi:
.LFB985:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	movl	$4, %edi
	call	_Znwm
	movl	$1, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE985:
	.size	_ZN9SharedptrIiEC2EPi, .-_ZN9SharedptrIiEC2EPi
	.weak	_ZN9SharedptrIiEC1EPi
	.set	_ZN9SharedptrIiEC1EPi,_ZN9SharedptrIiEC2EPi
	.section	.rodata
.LC1:
	.string	"~Sharedptr()"
	.section	.text._ZN9SharedptrIiED2Ev,"axG",@progbits,_ZN9SharedptrIiED5Ev,comdat
	.align 2
	.weak	_ZN9SharedptrIiED2Ev
	.type	_ZN9SharedptrIiED2Ev, @function
_ZN9SharedptrIiED2Ev:
.LFB988:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA988
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE7ReleaseEv
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE988:
	.section	.gcc_except_table
.LLSDA988:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE988-.LLSDACSB988
.LLSDACSB988:
.LLSDACSE988:
	.section	.text._ZN9SharedptrIiED2Ev,"axG",@progbits,_ZN9SharedptrIiED5Ev,comdat
	.size	_ZN9SharedptrIiED2Ev, .-_ZN9SharedptrIiED2Ev
	.weak	_ZN9SharedptrIiED1Ev
	.set	_ZN9SharedptrIiED1Ev,_ZN9SharedptrIiED2Ev
	.section	.text._ZN9SharedptrIiE8GetcountEv,"axG",@progbits,_ZN9SharedptrIiE8GetcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8GetcountEv
	.type	_ZN9SharedptrIiE8GetcountEv, @function
_ZN9SharedptrIiE8GetcountEv:
.LFB990:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE990:
	.size	_ZN9SharedptrIiE8GetcountEv, .-_ZN9SharedptrIiE8GetcountEv
	.section	.text._ZN9SharedptrIiEixEi,"axG",@progbits,_ZN9SharedptrIiEixEi,comdat
	.align 2
	.weak	_ZN9SharedptrIiEixEi
	.type	_ZN9SharedptrIiEixEi, @function
_ZN9SharedptrIiEixEi:
.LFB993:
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
	salq	$2, %rdx
	addq	%rdx, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE993:
	.size	_ZN9SharedptrIiEixEi, .-_ZN9SharedptrIiEixEi
	.section	.rodata
.LC2:
	.string	" "
	.section	.text._ZN9SharedptrIiE5PrintEv,"axG",@progbits,_ZN9SharedptrIiE5PrintEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE5PrintEv
	.type	_ZN9SharedptrIiE5PrintEv, @function
_ZN9SharedptrIiE5PrintEv:
.LFB994:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L18
.L19:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$1, -4(%rbp)
.L18:
	cmpl	$4, -4(%rbp)
	jle	.L19
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE994:
	.size	_ZN9SharedptrIiE5PrintEv, .-_ZN9SharedptrIiE5PrintEv
	.section	.text._ZN9SharedptrIiEC2ERKS0_,"axG",@progbits,_ZN9SharedptrIiEC5ERKS0_,comdat
	.align 2
	.weak	_ZN9SharedptrIiEC2ERKS0_
	.type	_ZN9SharedptrIiEC2ERKS0_, @function
_ZN9SharedptrIiEC2ERKS0_:
.LFB996:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L20
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8AddcountEv
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE996:
	.size	_ZN9SharedptrIiEC2ERKS0_, .-_ZN9SharedptrIiEC2ERKS0_
	.weak	_ZN9SharedptrIiEC1ERKS0_
	.set	_ZN9SharedptrIiEC1ERKS0_,_ZN9SharedptrIiEC2ERKS0_
	.section	.text._ZN9SharedptrIiEaSERKS0_,"axG",@progbits,_ZN9SharedptrIiEaSERKS0_,comdat
	.align 2
	.weak	_ZN9SharedptrIiEaSERKS0_
	.type	_ZN9SharedptrIiEaSERKS0_, @function
_ZN9SharedptrIiEaSERKS0_:
.LFB998:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jne	.L23
	movq	-8(%rbp), %rax
	jmp	.L24
.L23:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE7ReleaseEv
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L25
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8AddcountEv
.L25:
	movq	-8(%rbp), %rax
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE998:
	.size	_ZN9SharedptrIiEaSERKS0_, .-_ZN9SharedptrIiEaSERKS0_
	.section	.text._ZN9SharedptrIiE7ReleaseEv,"axG",@progbits,_ZN9SharedptrIiE7ReleaseEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE7ReleaseEv
	.type	_ZN9SharedptrIiE7ReleaseEv, @function
_ZN9SharedptrIiE7ReleaseEv:
.LFB1000:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L27
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8SubcountEv
	testl	%eax, %eax
	jne	.L27
	movl	$1, %eax
	jmp	.L28
.L27:
	movl	$0, %eax
.L28:
	testb	%al, %al
	je	.L26
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L26:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1000:
	.size	_ZN9SharedptrIiE7ReleaseEv, .-_ZN9SharedptrIiE7ReleaseEv
	.section	.text._ZN9SharedptrIiE8AddcountEv,"axG",@progbits,_ZN9SharedptrIiE8AddcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8AddcountEv
	.type	_ZN9SharedptrIiE8AddcountEv, @function
_ZN9SharedptrIiE8AddcountEv:
.LFB1003:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %edx
	addl	$1, %edx
	movl	%edx, (%rax)
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1003:
	.size	_ZN9SharedptrIiE8AddcountEv, .-_ZN9SharedptrIiE8AddcountEv
	.section	.text._ZN9SharedptrIiE8SubcountEv,"axG",@progbits,_ZN9SharedptrIiE8SubcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8SubcountEv
	.type	_ZN9SharedptrIiE8SubcountEv, @function
_ZN9SharedptrIiE8SubcountEv:
.LFB1005:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %edx
	subl	$1, %edx
	movl	%edx, (%rax)
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1005:
	.size	_ZN9SharedptrIiE8SubcountEv, .-_ZN9SharedptrIiE8SubcountEv
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1008:
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
	jne	.L34
	cmpl	$65535, -8(%rbp)
	jne	.L34
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L34:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1008:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1009:
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
.LFE1009:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
