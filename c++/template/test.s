	.file	"test.cc"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"<int,char>"
	.section	.text._ZN2GXIicEC2Ev,"axG",@progbits,_ZN2GXIicEC5Ev,comdat
	.align 2
	.weak	_ZN2GXIicEC2Ev
	.type	_ZN2GXIicEC2Ev, @function
_ZN2GXIicEC2Ev:
.LFB1198:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
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
.LFE1198:
	.size	_ZN2GXIicEC2Ev, .-_ZN2GXIicEC2Ev
	.weak	_ZN2GXIicEC1Ev
	.set	_ZN2GXIicEC1Ev,_ZN2GXIicEC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1202:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2ZMIiiEC1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2ZMIciEC1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2ZMIicEC1Ev
	leaq	-49(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2GXIiiEC1Ev
	leaq	-50(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2GXIciEC1Ev
	leaq	-51(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN2GXIicEC1Ev
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1202:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"<T1,int>"
	.section	.text._ZN2ZMIiiEC2Ev,"axG",@progbits,_ZN2ZMIiiEC5Ev,comdat
	.align 2
	.weak	_ZN2ZMIiiEC2Ev
	.type	_ZN2ZMIiiEC2Ev, @function
_ZN2ZMIiiEC2Ev:
.LFB1261:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
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
.LFE1261:
	.size	_ZN2ZMIiiEC2Ev, .-_ZN2ZMIiiEC2Ev
	.weak	_ZN2ZMIiiEC1Ev
	.set	_ZN2ZMIiiEC1Ev,_ZN2ZMIiiEC2Ev
	.section	.text._ZN2ZMIciEC2Ev,"axG",@progbits,_ZN2ZMIciEC5Ev,comdat
	.align 2
	.weak	_ZN2ZMIciEC2Ev
	.type	_ZN2ZMIciEC2Ev, @function
_ZN2ZMIciEC2Ev:
.LFB1264:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
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
.LFE1264:
	.size	_ZN2ZMIciEC2Ev, .-_ZN2ZMIciEC2Ev
	.weak	_ZN2ZMIciEC1Ev
	.set	_ZN2ZMIciEC1Ev,_ZN2ZMIciEC2Ev
	.section	.rodata
.LC2:
	.string	"<T1,T2>"
	.section	.text._ZN2ZMIicEC2Ev,"axG",@progbits,_ZN2ZMIicEC5Ev,comdat
	.align 2
	.weak	_ZN2ZMIicEC2Ev
	.type	_ZN2ZMIicEC2Ev, @function
_ZN2ZMIicEC2Ev:
.LFB1267:
	.cfi_startproc
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
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1267:
	.size	_ZN2ZMIicEC2Ev, .-_ZN2ZMIicEC2Ev
	.weak	_ZN2ZMIicEC1Ev
	.set	_ZN2ZMIicEC1Ev,_ZN2ZMIicEC2Ev
	.section	.text._ZN2GXIiiEC2Ev,"axG",@progbits,_ZN2GXIiiEC5Ev,comdat
	.align 2
	.weak	_ZN2GXIiiEC2Ev
	.type	_ZN2GXIiiEC2Ev, @function
_ZN2GXIiiEC2Ev:
.LFB1270:
	.cfi_startproc
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
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1270:
	.size	_ZN2GXIiiEC2Ev, .-_ZN2GXIiiEC2Ev
	.weak	_ZN2GXIiiEC1Ev
	.set	_ZN2GXIiiEC1Ev,_ZN2GXIiiEC2Ev
	.section	.text._ZN2GXIciEC2Ev,"axG",@progbits,_ZN2GXIciEC5Ev,comdat
	.align 2
	.weak	_ZN2GXIciEC2Ev
	.type	_ZN2GXIciEC2Ev, @function
_ZN2GXIciEC2Ev:
.LFB1273:
	.cfi_startproc
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
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1273:
	.size	_ZN2GXIciEC2Ev, .-_ZN2GXIciEC2Ev
	.weak	_ZN2GXIciEC1Ev
	.set	_ZN2GXIciEC1Ev,_ZN2GXIciEC2Ev
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1372:
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
.LFE1372:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1373:
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
.LFE1373:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
