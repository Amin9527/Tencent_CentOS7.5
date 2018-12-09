	.file	"test.cc"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN8truetype3getEv,"axG",@progbits,_ZN8truetype3getEv,comdat
	.weak	_ZN8truetype3getEv
	.type	_ZN8truetype3getEv, @function
_ZN8truetype3getEv:
.LFB1196:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1196:
	.size	_ZN8truetype3getEv, .-_ZN8truetype3getEv
	.section	.text._ZN9falsetype3getEv,"axG",@progbits,_ZN9falsetype3getEv,comdat
	.weak	_ZN9falsetype3getEv
	.type	_ZN9falsetype3getEv, @function
_ZN9falsetype3getEv:
.LFB1197:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1197:
	.size	_ZN9falsetype3getEv, .-_ZN9falsetype3getEv
	.section	.rodata
.LC0:
	.string	"ab"
.LC1:
	.string	"cd"
.LC2:
	.string	"ef"
.LC3:
	.string	"zm"
.LC4:
	.string	"zhangmin"
.LC5:
	.string	" "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1199:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1199
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$200, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	leaq	-64(%rbp), %rbx
	movl	$2, %r12d
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-40(%rbp), %rax
	movq	%rax, %rdx
	movl	$.LC0, %esi
	movq	%rbx, %rdi
.LEHB0:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE0:
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	8(%rbx), %r13
	subq	$1, %r12
	leaq	-39(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-39(%rbp), %rax
	movq	%rax, %rdx
	movl	$.LC1, %esi
	movq	%r13, %rdi
.LEHB1:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE1:
	leaq	-39(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	addq	$8, %r13
	subq	$1, %r12
	leaq	-38(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-38(%rbp), %rax
	movq	%rax, %rdx
	movl	$.LC2, %esi
	movq	%r13, %rdi
.LEHB2:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE2:
	leaq	-38(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-96(%rbp), %rbx
	movl	$2, %r12d
	movq	%rbx, %r13
	jmp	.L6
.L7:
	movq	%r13, %rdi
.LEHB3:
	call	_ZNSsC1Ev
.LEHE3:
	addq	$8, %r13
	subq	$1, %r12
.L6:
	cmpq	$-1, %r12
	jne	.L7
	leaq	-64(%rbp), %rcx
	leaq	-96(%rbp), %rax
	movl	$3, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_Z4copyISsEvPT_S1_i
	leaq	-64(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZNSsaSEPKc
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE4:
	leaq	-37(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-37(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movl	$.LC4, %esi
	movq	%rax, %rdi
.LEHB5:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE5:
	leaq	-37(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
.LEHB6:
	call	_ZNSsC1Ev
.LEHE6:
	leaq	-112(%rbp), %rcx
	leaq	-128(%rbp), %rax
	movl	$1, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB7:
	call	_Z4copyISsEvPT_S1_i
	leaq	-112(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZNSsaSEPKc
	leaq	-128(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$1, -224(%rbp)
	movl	$4, -220(%rbp)
	movl	$2, -216(%rbp)
	movl	$0, -212(%rbp)
	movl	$7, -208(%rbp)
	movl	$5, -204(%rbp)
	movl	$8, -200(%rbp)
	movl	$6, -196(%rbp)
	movl	$9, -192(%rbp)
	movl	$3, -188(%rbp)
	leaq	-224(%rbp), %rcx
	leaq	-176(%rbp), %rax
	movl	$10, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z4copyIiEvPT_S1_i
	movl	$0, -36(%rbp)
	jmp	.L8
.L9:
	movl	-36(%rbp), %eax
	cltq
	movl	-176(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC5, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$1, -36(%rbp)
.L8:
	cmpl	$9, -36(%rbp)
	jle	.L9
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
.LEHE7:
	movl	$0, %r12d
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-96(%rbp), %rbx
	addq	$24, %rbx
.L11:
	leaq	-96(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L10
	subq	$8, %rbx
	movq	%rbx, %rdi
	call	_ZNSsD1Ev
	jmp	.L11
.L10:
	leaq	-64(%rbp), %rbx
	addq	$24, %rbx
.L13:
	leaq	-64(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L14
	subq	$8, %rbx
	movq	%rbx, %rdi
	call	_ZNSsD1Ev
	jmp	.L13
.L14:
	movl	%r12d, %eax
	jmp	.L41
.L33:
	movq	%rax, %r13
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L16
.L34:
	movq	%rax, %r13
	leaq	-39(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L16
.L35:
	movq	%rax, %r13
	leaq	-38(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
.L16:
	testq	%rbx, %rbx
	je	.L19
	movl	$2, %eax
	subq	%r12, %rax
	salq	$3, %rax
	leaq	(%rbx,%rax), %r12
.L20:
	cmpq	%rbx, %r12
	je	.L19
	subq	$8, %r12
	movq	%r12, %rdi
	call	_ZNSsD1Ev
	jmp	.L20
.L19:
	movq	%r13, %rax
	movq	%rax, %rdi
.LEHB8:
	call	_Unwind_Resume
.L36:
	movq	%rax, %r13
	testq	%rbx, %rbx
	je	.L22
	movl	$2, %eax
	subq	%r12, %rax
	salq	$3, %rax
	leaq	(%rbx,%rax), %r12
.L23:
	cmpq	%rbx, %r12
	je	.L22
	subq	$8, %r12
	movq	%r12, %rdi
	call	_ZNSsD1Ev
	jmp	.L23
.L22:
	movq	%r13, %r12
	jmp	.L24
.L38:
	movq	%rax, %rbx
	leaq	-37(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %r12
	jmp	.L26
.L40:
	movq	%rax, %rbx
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L28
.L39:
	movq	%rax, %rbx
.L28:
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movq	%rbx, %r12
	jmp	.L26
.L37:
	movq	%rax, %r12
.L26:
	leaq	-96(%rbp), %rbx
	addq	$24, %rbx
.L30:
	leaq	-96(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L24
	subq	$8, %rbx
	movq	%rbx, %rdi
	call	_ZNSsD1Ev
	jmp	.L30
.L24:
	leaq	-64(%rbp), %rbx
	addq	$24, %rbx
.L32:
	leaq	-64(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L31
	subq	$8, %rbx
	movq	%rbx, %rdi
	call	_ZNSsD1Ev
	jmp	.L32
.L31:
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE8:
.L41:
	addq	$200, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1199:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1199:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1199-.LLSDACSB1199
.LLSDACSB1199:
	.uleb128 .LEHB0-.LFB1199
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L33-.LFB1199
	.uleb128 0
	.uleb128 .LEHB1-.LFB1199
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L34-.LFB1199
	.uleb128 0
	.uleb128 .LEHB2-.LFB1199
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L35-.LFB1199
	.uleb128 0
	.uleb128 .LEHB3-.LFB1199
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L36-.LFB1199
	.uleb128 0
	.uleb128 .LEHB4-.LFB1199
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L37-.LFB1199
	.uleb128 0
	.uleb128 .LEHB5-.LFB1199
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L38-.LFB1199
	.uleb128 0
	.uleb128 .LEHB6-.LFB1199
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L39-.LFB1199
	.uleb128 0
	.uleb128 .LEHB7-.LFB1199
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L40-.LFB1199
	.uleb128 0
	.uleb128 .LEHB8-.LFB1199
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE1199:
	.text
	.size	main, .-main
	.section	.rodata
.LC6:
	.string	"for() : "
	.section	.text._Z4copyISsEvPT_S1_i,"axG",@progbits,_Z4copyISsEvPT_S1_i,comdat
	.weak	_Z4copyISsEvPT_S1_i
	.type	_Z4copyISsEvPT_S1_i, @function
_Z4copyISsEvPT_S1_i:
.LFB1263:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	call	_ZN8truetype3getEv
	testb	%al, %al
	je	.L43
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy
	jmp	.L42
.L43:
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L45
.L46:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSsaSERKSs
	addl	$1, -4(%rbp)
.L45:
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L46
.L42:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1263:
	.size	_Z4copyISsEvPT_S1_i, .-_Z4copyISsEvPT_S1_i
	.section	.text._Z4copyIiEvPT_S1_i,"axG",@progbits,_Z4copyIiEvPT_S1_i,comdat
	.weak	_Z4copyIiEvPT_S1_i
	.type	_Z4copyIiEvPT_S1_i, @function
_Z4copyIiEvPT_S1_i:
.LFB1268:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	call	_ZN9falsetype3getEv
	testb	%al, %al
	je	.L48
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy
	jmp	.L47
.L48:
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L50
.L51:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-32(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L50:
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L51
.L47:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1268:
	.size	_Z4copyIiEvPT_S1_i, .-_Z4copyIiEvPT_S1_i
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1364:
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
	jne	.L52
	cmpl	$65535, -8(%rbp)
	jne	.L52
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L52:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1364:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1365:
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
.LFE1365:
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
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
