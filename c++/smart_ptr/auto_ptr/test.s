	.file	"test.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	" "
	.text
	.globl	main
	.type	main, @function
main:
.LFB978:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA978
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movl	$40, %edi
.LEHB0:
	call	_Znam
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN2zmIiEC1EPi
.LEHE0:
	leaq	-48(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN2zmIiEC1ERKS0_
	leaq	-80(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN2zmIiEC1EPi
.LEHE1:
	leaq	-48(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN2zmIiEaSERKS0_
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiEdeEv
	movl	$10, (%rax)
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
.LEHB2:
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	_ZN2zmIiEixEi
	movl	$11, (%rax)
	movl	$0, -20(%rbp)
	jmp	.L2
.L3:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC0, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$1, -20(%rbp)
.L2:
	cmpl	$9, -20(%rbp)
	jle	.L3
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
.LEHE2:
	movl	$0, %ebx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	movl	%ebx, %eax
	jmp	.L9
.L8:
	movq	%rax, %rbx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	jmp	.L6
.L7:
	movq	%rax, %rbx
.L6:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2zmIiED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
.L9:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE978:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA978:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE978-.LLSDACSB978
.LLSDACSB978:
	.uleb128 .LEHB0-.LFB978
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB978
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L7-.LFB978
	.uleb128 0
	.uleb128 .LEHB2-.LFB978
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L8-.LFB978
	.uleb128 0
	.uleb128 .LEHB3-.LFB978
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE978:
	.text
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"zm()"
	.section	.text._ZN2zmIiEC2EPi,"axG",@progbits,_ZN2zmIiEC5EPi,comdat
	.align 2
	.weak	_ZN2zmIiEC2EPi
	.type	_ZN2zmIiEC2EPi, @function
_ZN2zmIiEC2EPi:
.LFB980:
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
.LFE980:
	.size	_ZN2zmIiEC2EPi, .-_ZN2zmIiEC2EPi
	.weak	_ZN2zmIiEC1EPi
	.set	_ZN2zmIiEC1EPi,_ZN2zmIiEC2EPi
	.section	.rodata
.LC2:
	.string	"~zm()"
	.section	.text._ZN2zmIiED2Ev,"axG",@progbits,_ZN2zmIiED5Ev,comdat
	.align 2
	.weak	_ZN2zmIiED2Ev
	.type	_ZN2zmIiED2Ev, @function
_ZN2zmIiED2Ev:
.LFB983:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA983
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.section	.gcc_except_table
.LLSDA983:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE983-.LLSDACSB983
.LLSDACSB983:
.LLSDACSE983:
	.section	.text._ZN2zmIiED2Ev,"axG",@progbits,_ZN2zmIiED5Ev,comdat
	.size	_ZN2zmIiED2Ev, .-_ZN2zmIiED2Ev
	.weak	_ZN2zmIiED1Ev
	.set	_ZN2zmIiED1Ev,_ZN2zmIiED2Ev
	.section	.text._ZN2zmIiEC2ERKS0_,"axG",@progbits,_ZN2zmIiEC5ERKS0_,comdat
	.align 2
	.weak	_ZN2zmIiEC2ERKS0_
	.type	_ZN2zmIiEC2ERKS0_, @function
_ZN2zmIiEC2ERKS0_:
.LFB986:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE986:
	.size	_ZN2zmIiEC2ERKS0_, .-_ZN2zmIiEC2ERKS0_
	.weak	_ZN2zmIiEC1ERKS0_
	.set	_ZN2zmIiEC1ERKS0_,_ZN2zmIiEC2ERKS0_
	.section	.text._ZN2zmIiEaSERKS0_,"axG",@progbits,_ZN2zmIiEaSERKS0_,comdat
	.align 2
	.weak	_ZN2zmIiEaSERKS0_
	.type	_ZN2zmIiEaSERKS0_, @function
_ZN2zmIiEaSERKS0_:
.LFB988:
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
	cmpq	-8(%rbp), %rax
	je	.L15
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L16
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
.L16:
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
.L15:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE988:
	.size	_ZN2zmIiEaSERKS0_, .-_ZN2zmIiEaSERKS0_
	.section	.text._ZN2zmIiEdeEv,"axG",@progbits,_ZN2zmIiEdeEv,comdat
	.align 2
	.weak	_ZN2zmIiEdeEv
	.type	_ZN2zmIiEdeEv, @function
_ZN2zmIiEdeEv:
.LFB989:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE989:
	.size	_ZN2zmIiEdeEv, .-_ZN2zmIiEdeEv
	.section	.text._ZN2zmIiEixEi,"axG",@progbits,_ZN2zmIiEixEi,comdat
	.align 2
	.weak	_ZN2zmIiEixEi
	.type	_ZN2zmIiEixEi, @function
_ZN2zmIiEixEi:
.LFB992:
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
.LFE992:
	.size	_ZN2zmIiEixEi, .-_ZN2zmIiEixEi
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB999:
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
	jne	.L22
	cmpl	$65535, -8(%rbp)
	jne	.L22
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE999:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1000:
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
.LFE1000:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
