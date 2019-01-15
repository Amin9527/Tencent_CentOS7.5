	.file	"test.cc"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.text
	.type	_ZL18__gthread_active_pv, @function
_ZL18__gthread_active_pv:
.LFB340:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$_ZL28__gthrw___pthread_key_createPjPFvPvE, %eax
	testq	%rax, %rax
	setne	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE340:
	.size	_ZL18__gthread_active_pv, .-_ZL18__gthread_active_pv
	.type	_ZL20__gthread_mutex_lockP15pthread_mutex_t, @function
_ZL20__gthread_mutex_lockP15pthread_mutex_t:
.LFB354:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	call	_ZL18__gthread_active_pv
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L4
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE354:
	.size	_ZL20__gthread_mutex_lockP15pthread_mutex_t, .-_ZL20__gthread_mutex_lockP15pthread_mutex_t
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.type	_ZStL13allocator_arg, @object
	.size	_ZStL13allocator_arg, 1
_ZStL13allocator_arg:
	.zero	1
	.type	_ZStL6ignore, @object
	.size	_ZStL6ignore, 1
_ZStL6ignore:
	.zero	1
	.section	.text._ZNSt5mutex4lockEv,"axG",@progbits,_ZNSt5mutex4lockEv,comdat
	.align 2
	.weak	_ZNSt5mutex4lockEv
	.type	_ZNSt5mutex4lockEv, @function
_ZNSt5mutex4lockEv:
.LFB1857:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZL20__gthread_mutex_lockP15pthread_mutex_t
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L6
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	_ZSt20__throw_system_errori
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1857:
	.size	_ZNSt5mutex4lockEv, .-_ZNSt5mutex4lockEv
	.section	.rodata
	.type	_ZStL10defer_lock, @object
	.size	_ZStL10defer_lock, 1
_ZStL10defer_lock:
	.zero	1
	.type	_ZStL11try_to_lock, @object
	.size	_ZStL11try_to_lock, 1
_ZStL11try_to_lock:
	.zero	1
	.type	_ZStL10adopt_lock, @object
	.size	_ZStL10adopt_lock, 1
_ZStL10adopt_lock:
	.zero	1
	.text
	.globl	main
	.type	main, @function
main:
.LFB2427:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA2427
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
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
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEC1ERKS0_
.LEHE1:
	leaq	-80(%rbp), %rax
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
	leaq	-80(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$13, (%rax)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE5PrintEv
	leaq	-112(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEC1EPi
.LEHE2:
	leaq	-48(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB3:
	call	_ZN9SharedptrIiEaSERKS0_
	leaq	-112(%rbp), %rax
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
	leaq	-112(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZN9SharedptrIiEixEi
	movl	$14, (%rax)
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE5PrintEv
.LEHE3:
	movl	$0, %ebx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	movl	%ebx, %eax
	jmp	.L16
.L15:
	movq	%rax, %rbx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	jmp	.L11
.L14:
	movq	%rax, %rbx
.L11:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	jmp	.L12
.L13:
	movq	%rax, %rbx
.L12:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB4:
	call	_Unwind_Resume
.LEHE4:
.L16:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2427:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2427:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2427-.LLSDACSB2427
.LLSDACSB2427:
	.uleb128 .LEHB0-.LFB2427
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2427
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L13-.LFB2427
	.uleb128 0
	.uleb128 .LEHB2-.LFB2427
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L14-.LFB2427
	.uleb128 0
	.uleb128 .LEHB3-.LFB2427
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L15-.LFB2427
	.uleb128 0
	.uleb128 .LEHB4-.LFB2427
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE2427:
	.text
	.size	main, .-main
	.section	.text._ZNSt12__mutex_baseC2Ev,"axG",@progbits,_ZNSt12__mutex_baseC5Ev,comdat
	.align 2
	.weak	_ZNSt12__mutex_baseC2Ev
	.type	_ZNSt12__mutex_baseC2Ev, @function
_ZNSt12__mutex_baseC2Ev:
.LFB2498:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	$0, 8(%rax)
	movq	$0, 16(%rax)
	movq	$0, 24(%rax)
	movq	$0, 32(%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2498:
	.size	_ZNSt12__mutex_baseC2Ev, .-_ZNSt12__mutex_baseC2Ev
	.weak	_ZNSt12__mutex_baseC1Ev
	.set	_ZNSt12__mutex_baseC1Ev,_ZNSt12__mutex_baseC2Ev
	.section	.text._ZNSt5mutexC2Ev,"axG",@progbits,_ZNSt5mutexC5Ev,comdat
	.align 2
	.weak	_ZNSt5mutexC2Ev
	.type	_ZNSt5mutexC2Ev, @function
_ZNSt5mutexC2Ev:
.LFB2500:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12__mutex_baseC2Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2500:
	.size	_ZNSt5mutexC2Ev, .-_ZNSt5mutexC2Ev
	.weak	_ZNSt5mutexC1Ev
	.set	_ZNSt5mutexC1Ev,_ZNSt5mutexC2Ev
	.section	.rodata
.LC0:
	.string	"Sharedptr()"
	.section	.text._ZN9SharedptrIiEC2EPi,"axG",@progbits,_ZN9SharedptrIiEC5EPi,comdat
	.align 2
	.weak	_ZN9SharedptrIiEC2EPi
	.type	_ZN9SharedptrIiEC2EPi, @function
_ZN9SharedptrIiEC2EPi:
.LFB2502:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, (%rax)
	movl	$4, %edi
	call	_Znwm
	movl	$1, (%rax)
	movq	-24(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movl	$40, %edi
	call	_Znwm
	movq	%rax, %rbx
	movq	%rbx, %rdi
	call	_ZNSt5mutexC1Ev
	movq	-24(%rbp), %rax
	movq	%rbx, 16(%rax)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2502:
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
.LFB2505:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA2505
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
.LFE2505:
	.section	.gcc_except_table
.LLSDA2505:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2505-.LLSDACSB2505
.LLSDACSB2505:
.LLSDACSE2505:
	.section	.text._ZN9SharedptrIiED2Ev,"axG",@progbits,_ZN9SharedptrIiED5Ev,comdat
	.size	_ZN9SharedptrIiED2Ev, .-_ZN9SharedptrIiED2Ev
	.weak	_ZN9SharedptrIiED1Ev
	.set	_ZN9SharedptrIiED1Ev,_ZN9SharedptrIiED2Ev
	.section	.text._ZN9SharedptrIiE8GetcountEv,"axG",@progbits,_ZN9SharedptrIiE8GetcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8GetcountEv
	.type	_ZN9SharedptrIiE8GetcountEv, @function
_ZN9SharedptrIiE8GetcountEv:
.LFB2507:
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
.LFE2507:
	.size	_ZN9SharedptrIiE8GetcountEv, .-_ZN9SharedptrIiE8GetcountEv
	.section	.text._ZN9SharedptrIiEixEi,"axG",@progbits,_ZN9SharedptrIiEixEi,comdat
	.align 2
	.weak	_ZN9SharedptrIiEixEi
	.type	_ZN9SharedptrIiEixEi, @function
_ZN9SharedptrIiEixEi:
.LFB2510:
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
.LFE2510:
	.size	_ZN9SharedptrIiEixEi, .-_ZN9SharedptrIiEixEi
	.section	.rodata
.LC2:
	.string	" "
	.section	.text._ZN9SharedptrIiE5PrintEv,"axG",@progbits,_ZN9SharedptrIiE5PrintEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE5PrintEv
	.type	_ZN9SharedptrIiE5PrintEv, @function
_ZN9SharedptrIiE5PrintEv:
.LFB2511:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L27
.L28:
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
.L27:
	cmpl	$4, -4(%rbp)
	jle	.L28
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2511:
	.size	_ZN9SharedptrIiE5PrintEv, .-_ZN9SharedptrIiE5PrintEv
	.section	.text._ZN9SharedptrIiEC2ERKS0_,"axG",@progbits,_ZN9SharedptrIiEC5ERKS0_,comdat
	.align 2
	.weak	_ZN9SharedptrIiEC2ERKS0_
	.type	_ZN9SharedptrIiEC2ERKS0_, @function
_ZN9SharedptrIiEC2ERKS0_:
.LFB2513:
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
	movq	-16(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L29
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8AddcountEv
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2513:
	.size	_ZN9SharedptrIiEC2ERKS0_, .-_ZN9SharedptrIiEC2ERKS0_
	.weak	_ZN9SharedptrIiEC1ERKS0_
	.set	_ZN9SharedptrIiEC1ERKS0_,_ZN9SharedptrIiEC2ERKS0_
	.section	.text._ZN9SharedptrIiEaSERKS0_,"axG",@progbits,_ZN9SharedptrIiEaSERKS0_,comdat
	.align 2
	.weak	_ZN9SharedptrIiEaSERKS0_
	.type	_ZN9SharedptrIiEaSERKS0_, @function
_ZN9SharedptrIiEaSERKS0_:
.LFB2515:
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
	jne	.L32
	movq	-8(%rbp), %rax
	jmp	.L33
.L32:
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
	movq	-16(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L34
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8AddcountEv
.L34:
	movq	-8(%rbp), %rax
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2515:
	.size	_ZN9SharedptrIiEaSERKS0_, .-_ZN9SharedptrIiEaSERKS0_
	.section	.text._ZN9SharedptrIiE7ReleaseEv,"axG",@progbits,_ZN9SharedptrIiE7ReleaseEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE7ReleaseEv
	.type	_ZN9SharedptrIiE7ReleaseEv, @function
_ZN9SharedptrIiE7ReleaseEv:
.LFB2564:
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
	je	.L36
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9SharedptrIiE8SubcountEv
	testl	%eax, %eax
	jne	.L36
	movl	$1, %eax
	jmp	.L37
.L36:
	movl	$0, %eax
.L37:
	testb	%al, %al
	je	.L35
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L35:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2564:
	.size	_ZN9SharedptrIiE7ReleaseEv, .-_ZN9SharedptrIiE7ReleaseEv
	.section	.text._ZN9SharedptrIiE8AddcountEv,"axG",@progbits,_ZN9SharedptrIiE8AddcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8AddcountEv
	.type	_ZN9SharedptrIiE8AddcountEv, @function
_ZN9SharedptrIiE8AddcountEv:
.LFB2567:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	_ZNSt5mutex4lockEv
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %edx
	addl	$1, %edx
	movl	%edx, (%rax)
	movl	(%rax), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2567:
	.size	_ZN9SharedptrIiE8AddcountEv, .-_ZN9SharedptrIiE8AddcountEv
	.section	.text._ZN9SharedptrIiE8SubcountEv,"axG",@progbits,_ZN9SharedptrIiE8SubcountEv,comdat
	.align 2
	.weak	_ZN9SharedptrIiE8SubcountEv
	.type	_ZN9SharedptrIiE8SubcountEv, @function
_ZN9SharedptrIiE8SubcountEv:
.LFB2599:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	_ZNSt5mutex4lockEv
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	(%rax), %edx
	subl	$1, %edx
	movl	%edx, (%rax)
	movl	(%rax), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2599:
	.size	_ZN9SharedptrIiE8SubcountEv, .-_ZN9SharedptrIiE8SubcountEv
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2646:
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
	jne	.L43
	cmpl	$65535, -8(%rbp)
	jne	.L43
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L43:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2646:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.section	.rodata
	.align 4
	.type	_ZN9__gnu_cxxL21__default_lock_policyE, @object
	.size	_ZN9__gnu_cxxL21__default_lock_policyE, 4
_ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
	.text
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2647:
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
.LFE2647:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section	.rodata
	.align 8
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 8
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.quad	_ZL28__gthrw___pthread_key_createPjPFvPvE
	.weakref	_ZL28__gthrw___pthread_key_createPjPFvPvE,__pthread_key_create
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
