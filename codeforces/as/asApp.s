	.file	"asApp.cpp"
	.text
	.section	.text._ZN9wxPrivate17UntypedBufferDataD2Ev,"axG",@progbits,_ZN9wxPrivate17UntypedBufferDataD5Ev,comdat
	.align 2
	.weak	_ZN9wxPrivate17UntypedBufferDataD2Ev
	.type	_ZN9wxPrivate17UntypedBufferDataD2Ev, @function
_ZN9wxPrivate17UntypedBufferDataD2Ev:
.LFB64:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	18(%rax), %eax
	testb	%al, %al
	je	.L3
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	free@PLT
.L3:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE64:
	.size	_ZN9wxPrivate17UntypedBufferDataD2Ev, .-_ZN9wxPrivate17UntypedBufferDataD2Ev
	.weak	_ZN9wxPrivate17UntypedBufferDataD1Ev
	.set	_ZN9wxPrivate17UntypedBufferDataD1Ev,_ZN9wxPrivate17UntypedBufferDataD2Ev
	.section	.text._Z16wxGet_wxConvLibcv,"axG",@progbits,_Z16wxGet_wxConvLibcv,comdat
	.weak	_Z16wxGet_wxConvLibcv
	.type	_Z16wxGet_wxConvLibcv, @function
_Z16wxGet_wxConvLibcv:
.LFB263:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	wxConvLibcPtr(%rip), %rax
	testq	%rax, %rax
	jne	.L5
	call	_Z19wxGet_wxConvLibcPtrv@PLT
	movq	%rax, wxConvLibcPtr(%rip)
.L5:
	movq	wxConvLibcPtr(%rip), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE263:
	.size	_Z16wxGet_wxConvLibcv, .-_Z16wxGet_wxConvLibcv
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.section	.text._ZNKSt9type_info4nameEv,"axG",@progbits,_ZNKSt9type_info4nameEv,comdat
	.align 2
	.weak	_ZNKSt9type_info4nameEv
	.type	_ZNKSt9type_info4nameEv, @function
_ZNKSt9type_info4nameEv:
.LFB662:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$42, %al
	jne	.L8
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	addq	$1, %rax
	jmp	.L10
.L8:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
.L10:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE662:
	.size	_ZNKSt9type_info4nameEv, .-_ZNKSt9type_info4nameEv
	.section	.text._ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev,"axG",@progbits,_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED5Ev,comdat
	.align 2
	.weak	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev
	.type	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev, @function
_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev:
.LFB1705:
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
	call	_ZN22wxScopedCharTypeBufferIwED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1705:
	.size	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev, .-_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev
	.weak	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED1Ev
	.set	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED1Ev,_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED2Ev
	.section	.text._ZN8wxString7ImplStrEPKcRK8wxMBConv,"axG",@progbits,_ZN8wxString7ImplStrEPKcRK8wxMBConv,comdat
	.weak	_ZN8wxString7ImplStrEPKcRK8wxMBConv
	.type	_ZN8wxString7ImplStrEPKcRK8wxMBConv, @function
_ZN8wxString7ImplStrEPKcRK8wxMBConv:
.LFB1703:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1703
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%rdx, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	_ZN8wxString4nposE(%rip), %rdx
	leaq	-48(%rbp), %rax
	movq	-72(%rbp), %rcx
	movq	-64(%rbp), %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZN8wxString10ConvertStrEPKcmRK8wxMBConv@PLT
.LEHE0:
	leaq	-48(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN22wxScopedCharTypeBufferIwEC1ERKS0_
.LEHE1:
	nop
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED1Ev
	nop
	movq	-56(%rbp), %rax
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L15
	jmp	.L17
.L16:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxString17SubstrBufFromTypeI22wxScopedCharTypeBufferIwEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L17:
	call	__stack_chk_fail@PLT
.L15:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1703:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN8wxString7ImplStrEPKcRK8wxMBConv,"aG",@progbits,_ZN8wxString7ImplStrEPKcRK8wxMBConv,comdat
.LLSDA1703:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1703-.LLSDACSB1703
.LLSDACSB1703:
	.uleb128 .LEHB0-.LFB1703
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1703
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L16-.LFB1703
	.uleb128 0
	.uleb128 .LEHB2-.LFB1703
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1703:
	.section	.text._ZN8wxString7ImplStrEPKcRK8wxMBConv,"axG",@progbits,_ZN8wxString7ImplStrEPKcRK8wxMBConv,comdat
	.size	_ZN8wxString7ImplStrEPKcRK8wxMBConv, .-_ZN8wxString7ImplStrEPKcRK8wxMBConv
	.section	.text._ZN8wxStringD2Ev,"axG",@progbits,_ZN8wxStringD5Ev,comdat
	.align 2
	.weak	_ZN8wxStringD2Ev
	.type	_ZN8wxStringD2Ev, @function
_ZN8wxStringD2Ev:
.LFB1782:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	call	_ZN8wxString15ConvertedBufferIcED1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEED1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1782:
	.size	_ZN8wxStringD2Ev, .-_ZN8wxStringD2Ev
	.weak	_ZN8wxStringD1Ev
	.set	_ZN8wxStringD1Ev,_ZN8wxStringD2Ev
	.section	.text._ZN8wxStringC2Ev,"axG",@progbits,_ZN8wxStringC5Ev,comdat
	.align 2
	.weak	_ZN8wxStringC2Ev
	.type	_ZN8wxStringC2Ev, @function
_ZN8wxStringC2Ev:
.LFB1808:
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
	call	_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEC1Ev@PLT
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	call	_ZN8wxString15ConvertedBufferIcEC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1808:
	.size	_ZN8wxStringC2Ev, .-_ZN8wxStringC2Ev
	.weak	_ZN8wxStringC1Ev
	.set	_ZN8wxStringC1Ev,_ZN8wxStringC2Ev
	.section	.text._ZN8wxStringC2ERKS_,"axG",@progbits,_ZN8wxStringC5ERKS_,comdat
	.align 2
	.weak	_ZN8wxStringC2ERKS_
	.type	_ZN8wxStringC2ERKS_, @function
_ZN8wxStringC2ERKS_:
.LFB1811:
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
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEC1ERKS4_@PLT
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	call	_ZN8wxString15ConvertedBufferIcEC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1811:
	.size	_ZN8wxStringC2ERKS_, .-_ZN8wxStringC2ERKS_
	.weak	_ZN8wxStringC1ERKS_
	.set	_ZN8wxStringC1ERKS_,_ZN8wxStringC2ERKS_
	.section	.text._ZN8wxStringC2EPKc,"axG",@progbits,_ZN8wxStringC5EPKc,comdat
	.align 2
	.weak	_ZN8wxStringC2EPKc
	.type	_ZN8wxStringC2EPKc, @function
_ZN8wxStringC2EPKc:
.LFB1838:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1838
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rbx
	leaq	-33(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIwEC1Ev@PLT
.LEHB3:
	call	_Z16wxGet_wxConvLibcv
	movq	%rax, %rdx
	leaq	-32(%rbp), %rax
	movq	-64(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxString7ImplStrEPKcRK8wxMBConv
.LEHE3:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
.LEHB4:
	call	_ZNK22wxScopedCharTypeBufferIwEcvPKwEv
	movq	%rax, %rcx
	leaq	-33(%rbp), %rax
	movq	%rax, %rdx
	movq	%rcx, %rsi
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEC1EPKwRKS3_@PLT
.LEHE4:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN22wxScopedCharTypeBufferIwED1Ev
	leaq	-33(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIwED1Ev@PLT
	movq	-56(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	call	_ZN8wxString15ConvertedBufferIcEC1Ev
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L24
	jmp	.L27
.L26:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN22wxScopedCharTypeBufferIwED1Ev
	jmp	.L23
.L25:
	movq	%rax, %rbx
.L23:
	leaq	-33(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIwED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume@PLT
.LEHE5:
.L27:
	call	__stack_chk_fail@PLT
.L24:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1838:
	.section	.gcc_except_table._ZN8wxStringC2EPKc,"aG",@progbits,_ZN8wxStringC5EPKc,comdat
.LLSDA1838:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1838-.LLSDACSB1838
.LLSDACSB1838:
	.uleb128 .LEHB3-.LFB1838
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L25-.LFB1838
	.uleb128 0
	.uleb128 .LEHB4-.LFB1838
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L26-.LFB1838
	.uleb128 0
	.uleb128 .LEHB5-.LFB1838
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1838:
	.section	.text._ZN8wxStringC2EPKc,"axG",@progbits,_ZN8wxStringC5EPKc,comdat
	.size	_ZN8wxStringC2EPKc, .-_ZN8wxStringC2EPKc
	.weak	_ZN8wxStringC1EPKc
	.set	_ZN8wxStringC1EPKc,_ZN8wxStringC2EPKc
	.section	.text._ZN8wxStringaSERKS_,"axG",@progbits,_ZN8wxStringaSERKS_,comdat
	.align 2
	.weak	_ZN8wxStringaSERKS_
	.type	_ZN8wxStringaSERKS_, @function
_ZN8wxStringaSERKS_:
.LFB1974:
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
	cmpq	-16(%rbp), %rax
	je	.L29
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEaSERKS4_@PLT
.L29:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1974:
	.size	_ZN8wxStringaSERKS_, .-_ZN8wxStringaSERKS_
	.section	.text._ZN8wxObjectaSERKS_,"axG",@progbits,_ZN8wxObjectaSERKS_,comdat
	.align 2
	.weak	_ZN8wxObjectaSERKS_
	.type	_ZN8wxObjectaSERKS_, @function
_ZN8wxObjectaSERKS_:
.LFB3706:
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
	cmpq	-16(%rbp), %rax
	je	.L32
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxObject3RefERKS_@PLT
.L32:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3706:
	.size	_ZN8wxObjectaSERKS_, .-_ZN8wxObjectaSERKS_
	.section	.text._ZN6wxSizeC2Eii,"axG",@progbits,_ZN6wxSizeC5Eii,comdat
	.align 2
	.weak	_ZN6wxSizeC2Eii
	.type	_ZN6wxSizeC2Eii, @function
_ZN6wxSizeC2Eii:
.LFB5035:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5035:
	.size	_ZN6wxSizeC2Eii, .-_ZN6wxSizeC2Eii
	.weak	_ZN6wxSizeC1Eii
	.set	_ZN6wxSizeC1Eii,_ZN6wxSizeC2Eii
	.section	.text._ZN7wxPointC2Eii,"axG",@progbits,_ZN7wxPointC5Eii,comdat
	.align 2
	.weak	_ZN7wxPointC2Eii
	.type	_ZN7wxPointC2Eii, @function
_ZN7wxPointC2Eii:
.LFB5118:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5118:
	.size	_ZN7wxPointC2Eii, .-_ZN7wxPointC2Eii
	.weak	_ZN7wxPointC1Eii
	.set	_ZN7wxPointC1Eii,_ZN7wxPointC2Eii
	.section	.rodata
	.align 4
	.type	_ZL15wxInvalidOffset, @object
	.size	_ZL15wxInvalidOffset, 4
_ZL15wxInvalidOffset:
	.long	-1
	.section	.text._ZN17wxCriticalSection5EnterEv,"axG",@progbits,_ZN17wxCriticalSection5EnterEv,comdat
	.align 2
	.weak	_ZN17wxCriticalSection5EnterEv
	.type	_ZN17wxCriticalSection5EnterEv, @function
_ZN17wxCriticalSection5EnterEv:
.LFB7290:
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
	call	_ZN7wxMutex4LockEv@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7290:
	.size	_ZN17wxCriticalSection5EnterEv, .-_ZN17wxCriticalSection5EnterEv
	.section	.text._ZN17wxCriticalSection5LeaveEv,"axG",@progbits,_ZN17wxCriticalSection5LeaveEv,comdat
	.align 2
	.weak	_ZN17wxCriticalSection5LeaveEv
	.type	_ZN17wxCriticalSection5LeaveEv, @function
_ZN17wxCriticalSection5LeaveEv:
.LFB7292:
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
	call	_ZN7wxMutex6UnlockEv@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7292:
	.size	_ZN17wxCriticalSection5LeaveEv, .-_ZN17wxCriticalSection5LeaveEv
	.section	.text._ZN23wxCriticalSectionLockerC2ER17wxCriticalSection,"axG",@progbits,_ZN23wxCriticalSectionLockerC5ER17wxCriticalSection,comdat
	.align 2
	.weak	_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection
	.type	_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection, @function
_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection:
.LFB7294:
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
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZN17wxCriticalSection5EnterEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7294:
	.size	_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection, .-_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection
	.weak	_ZN23wxCriticalSectionLockerC1ER17wxCriticalSection
	.set	_ZN23wxCriticalSectionLockerC1ER17wxCriticalSection,_ZN23wxCriticalSectionLockerC2ER17wxCriticalSection
	.section	.text._ZN23wxCriticalSectionLockerD2Ev,"axG",@progbits,_ZN23wxCriticalSectionLockerD5Ev,comdat
	.align 2
	.weak	_ZN23wxCriticalSectionLockerD2Ev
	.type	_ZN23wxCriticalSectionLockerD2Ev, @function
_ZN23wxCriticalSectionLockerD2Ev:
.LFB7297:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA7297
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZN17wxCriticalSection5LeaveEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7297:
	.section	.gcc_except_table._ZN23wxCriticalSectionLockerD2Ev,"aG",@progbits,_ZN23wxCriticalSectionLockerD5Ev,comdat
.LLSDA7297:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE7297-.LLSDACSB7297
.LLSDACSB7297:
.LLSDACSE7297:
	.section	.text._ZN23wxCriticalSectionLockerD2Ev,"axG",@progbits,_ZN23wxCriticalSectionLockerD5Ev,comdat
	.size	_ZN23wxCriticalSectionLockerD2Ev, .-_ZN23wxCriticalSectionLockerD2Ev
	.weak	_ZN23wxCriticalSectionLockerD1Ev
	.set	_ZN23wxCriticalSectionLockerD1Ev,_ZN23wxCriticalSectionLockerD2Ev
	.section	.text._ZN8wxThread8OnDeleteEv,"axG",@progbits,_ZN8wxThread8OnDeleteEv,comdat
	.align 2
	.weak	_ZN8wxThread8OnDeleteEv
	.type	_ZN8wxThread8OnDeleteEv, @function
_ZN8wxThread8OnDeleteEv:
.LFB7304:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7304:
	.size	_ZN8wxThread8OnDeleteEv, .-_ZN8wxThread8OnDeleteEv
	.section	.text._ZN8wxThread6OnKillEv,"axG",@progbits,_ZN8wxThread6OnKillEv,comdat
	.align 2
	.weak	_ZN8wxThread6OnKillEv
	.type	_ZN8wxThread6OnKillEv, @function
_ZN8wxThread6OnKillEv:
.LFB7305:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7305:
	.size	_ZN8wxThread6OnKillEv, .-_ZN8wxThread6OnKillEv
	.section	.text._ZN8wxThread6OnExitEv,"axG",@progbits,_ZN8wxThread6OnExitEv,comdat
	.align 2
	.weak	_ZN8wxThread6OnExitEv
	.type	_ZN8wxThread6OnExitEv, @function
_ZN8wxThread6OnExitEv:
.LFB7306:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7306:
	.size	_ZN8wxThread6OnExitEv, .-_ZN8wxThread6OnExitEv
	.section	.text._ZN20wxThreadHelperThread5EntryEv,"axG",@progbits,_ZN20wxThreadHelperThread5EntryEv,comdat
	.align 2
	.weak	_ZN20wxThreadHelperThread5EntryEv
	.type	_ZN20wxThreadHelperThread5EntryEv, @function
_ZN20wxThreadHelperThread5EntryEv:
.LFB7321:
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
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	leaq	24(%rax), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN23wxCriticalSectionLockerC1ER17wxCriticalSection
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jne	.L44
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movq	$0, 8(%rax)
.L44:
	movq	-32(%rbp), %rbx
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN23wxCriticalSectionLockerD1Ev
	movq	%rbx, %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L46
	call	__stack_chk_fail@PLT
.L46:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7321:
	.size	_ZN20wxThreadHelperThread5EntryEv, .-_ZN20wxThreadHelperThread5EntryEv
	.section	.text._ZN16wxTypeIdentifierC2EPKc,"axG",@progbits,_ZN16wxTypeIdentifierC5EPKc,comdat
	.align 2
	.weak	_ZN16wxTypeIdentifierC2EPKc
	.type	_ZN16wxTypeIdentifierC2EPKc, @function
_ZN16wxTypeIdentifierC2EPKc:
.LFB7351:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7351:
	.size	_ZN16wxTypeIdentifierC2EPKc, .-_ZN16wxTypeIdentifierC2EPKc
	.weak	_ZN16wxTypeIdentifierC1EPKc
	.set	_ZN16wxTypeIdentifierC1EPKc,_ZN16wxTypeIdentifierC2EPKc
	.section	.text._ZN16wxTypeIdentifiereqERKS_,"axG",@progbits,_ZN16wxTypeIdentifiereqERKS_,comdat
	.align 2
	.weak	_ZN16wxTypeIdentifiereqERKS_
	.type	_ZN16wxTypeIdentifiereqERKS_, @function
_ZN16wxTypeIdentifiereqERKS_:
.LFB7353:
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
	movq	(%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	sete	%al
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7353:
	.size	_ZN16wxTypeIdentifiereqERKS_, .-_ZN16wxTypeIdentifiereqERKS_
	.section	.text._ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor,"axG",@progbits,_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor,comdat
	.align 2
	.weak	_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor
	.type	_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor, @function
_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor:
.LFB8380:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	subq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZNKSt9type_info4nameEv
	movq	%rax, %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN16wxTypeIdentifierC1EPKc
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	subq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZNKSt9type_info4nameEv
	movq	%rax, %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN16wxTypeIdentifierC1EPKc
	leaq	-24(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN16wxTypeIdentifiereqERKS_
	testb	%al, %al
	je	.L51
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	jne	.L52
	movq	-40(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, %rdx
	je	.L53
	movq	-40(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L53
.L52:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L54
.L53:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, %rdx
	je	.L55
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L54
.L55:
	movl	$1, %eax
	jmp	.L57
.L54:
	movl	$0, %eax
	jmp	.L57
.L51:
	movl	$0, %eax
.L57:
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L58
	call	__stack_chk_fail@PLT
.L58:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8380:
	.size	_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor, .-_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor
	.section	.text._ZNK20wxObjectEventFunctor13GetEvtHandlerEv,"axG",@progbits,_ZNK20wxObjectEventFunctor13GetEvtHandlerEv,comdat
	.align 2
	.weak	_ZNK20wxObjectEventFunctor13GetEvtHandlerEv
	.type	_ZNK20wxObjectEventFunctor13GetEvtHandlerEv, @function
_ZNK20wxObjectEventFunctor13GetEvtHandlerEv:
.LFB8381:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8381:
	.size	_ZNK20wxObjectEventFunctor13GetEvtHandlerEv, .-_ZNK20wxObjectEventFunctor13GetEvtHandlerEv
	.section	.text._ZNK20wxObjectEventFunctor12GetEvtMethodEv,"axG",@progbits,_ZNK20wxObjectEventFunctor12GetEvtMethodEv,comdat
	.align 2
	.weak	_ZNK20wxObjectEventFunctor12GetEvtMethodEv
	.type	_ZNK20wxObjectEventFunctor12GetEvtMethodEv, @function
_ZNK20wxObjectEventFunctor12GetEvtMethodEv:
.LFB8382:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rdx
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8382:
	.size	_ZNK20wxObjectEventFunctor12GetEvtMethodEv, .-_ZNK20wxObjectEventFunctor12GetEvtMethodEv
	.section	.text._ZNK7wxEvent12GetEventTypeEv,"axG",@progbits,_ZNK7wxEvent12GetEventTypeEv,comdat
	.align 2
	.weak	_ZNK7wxEvent12GetEventTypeEv
	.type	_ZNK7wxEvent12GetEventTypeEv, @function
_ZNK7wxEvent12GetEventTypeEv:
.LFB8427:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	24(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8427:
	.size	_ZNK7wxEvent12GetEventTypeEv, .-_ZNK7wxEvent12GetEventTypeEv
	.section	.text._ZNK7wxEvent17GetPropagatedFromEv,"axG",@progbits,_ZNK7wxEvent17GetPropagatedFromEv,comdat
	.align 2
	.weak	_ZNK7wxEvent17GetPropagatedFromEv
	.type	_ZNK7wxEvent17GetPropagatedFromEv, @function
_ZNK7wxEvent17GetPropagatedFromEv:
.LFB8442:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	72(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8442:
	.size	_ZNK7wxEvent17GetPropagatedFromEv, .-_ZNK7wxEvent17GetPropagatedFromEv
	.section	.text._ZN12wxEvtHandler14SetNextHandlerEPS_,"axG",@progbits,_ZN12wxEvtHandler14SetNextHandlerEPS_,comdat
	.align 2
	.weak	_ZN12wxEvtHandler14SetNextHandlerEPS_
	.type	_ZN12wxEvtHandler14SetNextHandlerEPS_, @function
_ZN12wxEvtHandler14SetNextHandlerEPS_:
.LFB9052:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9052:
	.size	_ZN12wxEvtHandler14SetNextHandlerEPS_, .-_ZN12wxEvtHandler14SetNextHandlerEPS_
	.section	.text._ZN12wxEvtHandler18SetPreviousHandlerEPS_,"axG",@progbits,_ZN12wxEvtHandler18SetPreviousHandlerEPS_,comdat
	.align 2
	.weak	_ZN12wxEvtHandler18SetPreviousHandlerEPS_
	.type	_ZN12wxEvtHandler18SetPreviousHandlerEPS_, @function
_ZN12wxEvtHandler18SetPreviousHandlerEPS_:
.LFB9053:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 32(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9053:
	.size	_ZN12wxEvtHandler18SetPreviousHandlerEPS_, .-_ZN12wxEvtHandler18SetPreviousHandlerEPS_
	.section	.text._ZN12wxEvtHandler15AddPendingEventERK7wxEvent,"axG",@progbits,_ZN12wxEvtHandler15AddPendingEventERK7wxEvent,comdat
	.align 2
	.weak	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent
	.type	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent, @function
_ZN12wxEvtHandler15AddPendingEventERK7wxEvent:
.LFB9056:
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
	movq	(%rax), %rax
	addq	$64, %rax
	movq	(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	addq	$40, %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rbx
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9056:
	.size	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent, .-_ZN12wxEvtHandler15AddPendingEventERK7wxEvent
	.section	.text._ZN12wxEvtHandler12TryValidatorER7wxEvent,"axG",@progbits,_ZN12wxEvtHandler12TryValidatorER7wxEvent,comdat
	.align 2
	.weak	_ZN12wxEvtHandler12TryValidatorER7wxEvent
	.type	_ZN12wxEvtHandler12TryValidatorER7wxEvent, @function
_ZN12wxEvtHandler12TryValidatorER7wxEvent:
.LFB9080:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9080:
	.size	_ZN12wxEvtHandler12TryValidatorER7wxEvent, .-_ZN12wxEvtHandler12TryValidatorER7wxEvent
	.section	.text._ZN12wxEvtHandler9TryParentER7wxEvent,"axG",@progbits,_ZN12wxEvtHandler9TryParentER7wxEvent,comdat
	.align 2
	.weak	_ZN12wxEvtHandler9TryParentER7wxEvent
	.type	_ZN12wxEvtHandler9TryParentER7wxEvent, @function
_ZN12wxEvtHandler9TryParentER7wxEvent:
.LFB9081:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN12wxEvtHandler8DoTryAppER7wxEvent@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9081:
	.size	_ZN12wxEvtHandler9TryParentER7wxEvent, .-_ZN12wxEvtHandler9TryParentER7wxEvent
	.section	.text._ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent,"axG",@progbits,_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent,comdat
	.align 2
	.weak	_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent
	.type	_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent, @function
_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent:
.LFB9172:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L75
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	jmp	.L76
.L75:
	movq	-32(%rbp), %rax
.L76:
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	andl	$1, %eax
	testq	%rax, %rax
	je	.L77
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	subq	$1, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	jmp	.L78
.L77:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
.L78:
	movq	-40(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rcx, %rdi
	call	*%rax
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9172:
	.size	_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent, .-_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent
	.section	.text._Z16wxGetTranslationRK8wxStringS1_,"axG",@progbits,_Z16wxGetTranslationRK8wxStringS1_,comdat
	.weak	_Z16wxGetTranslationRK8wxStringS1_
	.type	_Z16wxGetTranslationRK8wxStringS1_, @function
_Z16wxGetTranslationRK8wxStringS1_:
.LFB9256:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	call	_ZN14wxTranslations3GetEv@PLT
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L80
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNK14wxTranslations19GetTranslatedStringERK8wxStringS2_@PLT
	jmp	.L81
.L80:
	movl	$0, %eax
.L81:
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L82
	movq	-8(%rbp), %rax
	jmp	.L83
.L82:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN14wxTranslations21GetUntranslatedStringERK8wxString@PLT
.L83:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9256:
	.size	_Z16wxGetTranslationRK8wxStringS1_, .-_Z16wxGetTranslationRK8wxStringS1_
	.section	.text._ZN16wxAppConsoleBase10CallOnInitEv,"axG",@progbits,_ZN16wxAppConsoleBase10CallOnInitEv,comdat
	.align 2
	.weak	_ZN16wxAppConsoleBase10CallOnInitEv
	.type	_ZN16wxAppConsoleBase10CallOnInitEv, @function
_ZN16wxAppConsoleBase10CallOnInitEv:
.LFB9566:
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
	addq	$184, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9566:
	.size	_ZN16wxAppConsoleBase10CallOnInitEv, .-_ZN16wxAppConsoleBase10CallOnInitEv
	.section	.text._ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase,"axG",@progbits,_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase,comdat
	.align 2
	.weak	_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase
	.type	_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase, @function
_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase:
.LFB9567:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9567:
	.size	_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase, .-_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase
	.section	.text._ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase,"axG",@progbits,_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase,comdat
	.align 2
	.weak	_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase
	.type	_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase, @function
_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase:
.LFB9568:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9568:
	.size	_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase, .-_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase
	.section	.text._ZN16wxAppConsoleBase16OnFatalExceptionEv,"axG",@progbits,_ZN16wxAppConsoleBase16OnFatalExceptionEv,comdat
	.align 2
	.weak	_ZN16wxAppConsoleBase16OnFatalExceptionEv
	.type	_ZN16wxAppConsoleBase16OnFatalExceptionEv, @function
_ZN16wxAppConsoleBase16OnFatalExceptionEv:
.LFB9569:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9569:
	.size	_ZN16wxAppConsoleBase16OnFatalExceptionEv, .-_ZN16wxAppConsoleBase16OnFatalExceptionEv
	.section	.text._ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE,"axG",@progbits,_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE,comdat
	.weak	_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE
	.type	_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE, @function
_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE:
.LFB9579:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, _ZN16wxAppConsoleBase12ms_appInitFnE(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9579:
	.size	_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE, .-_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE
	.section	.text._ZN16wxAppConsoleBase11GetInstanceEv,"axG",@progbits,_ZN16wxAppConsoleBase11GetInstanceEv,comdat
	.weak	_ZN16wxAppConsoleBase11GetInstanceEv
	.type	_ZN16wxAppConsoleBase11GetInstanceEv, @function
_ZN16wxAppConsoleBase11GetInstanceEv:
.LFB9581:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	_ZN16wxAppConsoleBase14ms_appInstanceE(%rip), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9581:
	.size	_ZN16wxAppConsoleBase11GetInstanceEv, .-_ZN16wxAppConsoleBase11GetInstanceEv
	.section	.text._ZNK9wxAppBase13UsesEventLoopEv,"axG",@progbits,_ZNK9wxAppBase13UsesEventLoopEv,comdat
	.align 2
	.weak	_ZNK9wxAppBase13UsesEventLoopEv
	.type	_ZNK9wxAppBase13UsesEventLoopEv, @function
_ZNK9wxAppBase13UsesEventLoopEv:
.LFB9672:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9672:
	.size	_ZNK9wxAppBase13UsesEventLoopEv, .-_ZNK9wxAppBase13UsesEventLoopEv
	.section	.text._ZNK9wxAppBase8IsActiveEv,"axG",@progbits,_ZNK9wxAppBase8IsActiveEv,comdat
	.align 2
	.weak	_ZNK9wxAppBase8IsActiveEv
	.type	_ZNK9wxAppBase8IsActiveEv, @function
_ZNK9wxAppBase8IsActiveEv:
.LFB9673:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	662(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9673:
	.size	_ZNK9wxAppBase8IsActiveEv, .-_ZNK9wxAppBase8IsActiveEv
	.section	.text._ZN9wxAppBase14SetDisplayModeERK11wxVideoMode,"axG",@progbits,_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode,comdat
	.align 2
	.weak	_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode
	.type	_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode, @function
_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode:
.LFB9677:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9677:
	.size	_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode, .-_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode
	.section	.text._ZN9wxAppBase12SetPrintModeEi,"axG",@progbits,_ZN9wxAppBase12SetPrintModeEi,comdat
	.align 2
	.weak	_ZN9wxAppBase12SetPrintModeEi
	.type	_ZN9wxAppBase12SetPrintModeEi, @function
_ZN9wxAppBase12SetPrintModeEi:
.LFB9680:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9680:
	.size	_ZN9wxAppBase12SetPrintModeEi, .-_ZN9wxAppBase12SetPrintModeEi
	.section	.text._ZN5wxApp14GetXVisualInfoEv,"axG",@progbits,_ZN5wxApp14GetXVisualInfoEv,comdat
	.align 2
	.weak	_ZN5wxApp14GetXVisualInfoEv
	.type	_ZN5wxApp14GetXVisualInfoEv, @function
_ZN5wxApp14GetXVisualInfoEv:
.LFB9683:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9683:
	.size	_ZN5wxApp14GetXVisualInfoEv, .-_ZN5wxApp14GetXVisualInfoEv
	.section	.text._ZN16wxAppInitializerC2EPFP12wxAppConsolevE,"axG",@progbits,_ZN16wxAppInitializerC5EPFP12wxAppConsolevE,comdat
	.align 2
	.weak	_ZN16wxAppInitializerC2EPFP12wxAppConsolevE
	.type	_ZN16wxAppInitializerC2EPFP12wxAppConsolevE, @function
_ZN16wxAppInitializerC2EPFP12wxAppConsolevE:
.LFB9685:
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
	movq	%rax, %rdi
	call	_ZN16wxAppConsoleBase22SetInitializerFunctionEPFP12wxAppConsolevE
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9685:
	.size	_ZN16wxAppInitializerC2EPFP12wxAppConsolevE, .-_ZN16wxAppInitializerC2EPFP12wxAppConsolevE
	.weak	_ZN16wxAppInitializerC1EPFP12wxAppConsolevE
	.set	_ZN16wxAppInitializerC1EPFP12wxAppConsolevE,_ZN16wxAppInitializerC2EPFP12wxAppConsolevE
	.section	.rodata
	.align 4
	.type	_ZL5wxEOF, @object
	.size	_ZL5wxEOF, 4
_ZL5wxEOF:
	.long	-1
	.type	_ZL19wxALPHA_TRANSPARENT, @object
	.size	_ZL19wxALPHA_TRANSPARENT, 1
_ZL19wxALPHA_TRANSPARENT:
	.zero	1
	.type	_ZL14wxALPHA_OPAQUE, @object
	.size	_ZL14wxALPHA_OPAQUE, 1
_ZL14wxALPHA_OPAQUE:
	.byte	-1
	.section	.text._ZN12wxWindowBase7SetNameERK8wxString,"axG",@progbits,_ZN12wxWindowBase7SetNameERK8wxString,comdat
	.align 2
	.weak	_ZN12wxWindowBase7SetNameERK8wxString
	.type	_ZN12wxWindowBase7SetNameERK8wxString, @function
_ZN12wxWindowBase7SetNameERK8wxString:
.LFB10433:
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
	leaq	352(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZN8wxStringaSERKS_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10433:
	.size	_ZN12wxWindowBase7SetNameERK8wxString, .-_ZN12wxWindowBase7SetNameERK8wxString
	.section	.text._ZNK12wxWindowBase7GetNameEv,"axG",@progbits,_ZNK12wxWindowBase7GetNameEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase7GetNameEv
	.type	_ZNK12wxWindowBase7GetNameEv, @function
_ZNK12wxWindowBase7GetNameEv:
.LFB10434:
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
	leaq	352(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxStringC1ERKS_
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10434:
	.size	_ZNK12wxWindowBase7GetNameEv, .-_ZNK12wxWindowBase7GetNameEv
	.section	.text._ZNK12wxWindowBase16GetWindowVariantEv,"axG",@progbits,_ZNK12wxWindowBase16GetWindowVariantEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase16GetWindowVariantEv
	.type	_ZNK12wxWindowBase16GetWindowVariantEv, @function
_ZNK12wxWindowBase16GetWindowVariantEv:
.LFB10435:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	448(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10435:
	.size	_ZNK12wxWindowBase16GetWindowVariantEv, .-_ZNK12wxWindowBase16GetWindowVariantEv
	.section	.text._ZNK12wxWindowBase13GetClientSizeEv,"axG",@progbits,_ZNK12wxWindowBase13GetClientSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase13GetClientSizeEv
	.type	_ZNK12wxWindowBase13GetClientSizeEv, @function
_ZNK12wxWindowBase13GetClientSizeEv:
.LFB10459:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$1312, %rax
	movq	(%rax), %rax
	leaq	-20(%rbp), %rdx
	leaq	-24(%rbp), %rsi
	movq	-40(%rbp), %rcx
	movq	%rcx, %rdi
	call	*%rax
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %ecx
	leaq	-16(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN6wxSizeC1Eii
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L109
	call	__stack_chk_fail@PLT
.L109:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10459:
	.size	_ZNK12wxWindowBase13GetClientSizeEv, .-_ZNK12wxWindowBase13GetClientSizeEv
	.section	.text._ZN12wxWindowBase12SetSizeHintsEiiiiii,"axG",@progbits,_ZN12wxWindowBase12SetSizeHintsEiiiiii,comdat
	.align 2
	.weak	_ZN12wxWindowBase12SetSizeHintsEiiiiii
	.type	_ZN12wxWindowBase12SetSizeHintsEiiiiii, @function
_ZN12wxWindowBase12SetSizeHintsEiiiiii:
.LFB10471:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movl	%ecx, -20(%rbp)
	movl	%r8d, -24(%rbp)
	movl	%r9d, -28(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$1368, %rax
	movq	(%rax), %rax
	movl	-28(%rbp), %r9d
	movl	-24(%rbp), %r10d
	movl	-20(%rbp), %ecx
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %esi
	movq	-8(%rbp), %rdi
	subq	$8, %rsp
	movl	16(%rbp), %r8d
	pushq	%r8
	movl	%r10d, %r8d
	call	*%rax
	addq	$16, %rsp
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10471:
	.size	_ZN12wxWindowBase12SetSizeHintsEiiiiii, .-_ZN12wxWindowBase12SetSizeHintsEiiiiii
	.section	.text._ZN12wxWindowBase16SetMinClientSizeERK6wxSize,"axG",@progbits,_ZN12wxWindowBase16SetMinClientSizeERK6wxSize,comdat
	.align 2
	.weak	_ZN12wxWindowBase16SetMinClientSizeERK6wxSize
	.type	_ZN12wxWindowBase16SetMinClientSizeERK6wxSize, @function
_ZN12wxWindowBase16SetMinClientSizeERK6wxSize:
.LFB10473:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$312, %rax
	movq	(%rax), %rbx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$256, %rax
	movq	(%rax), %rax
	movq	-48(%rbp), %rcx
	movq	-40(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rbx
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L112
	call	__stack_chk_fail@PLT
.L112:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10473:
	.size	_ZN12wxWindowBase16SetMinClientSizeERK6wxSize, .-_ZN12wxWindowBase16SetMinClientSizeERK6wxSize
	.section	.text._ZN12wxWindowBase16SetMaxClientSizeERK6wxSize,"axG",@progbits,_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize,comdat
	.align 2
	.weak	_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize
	.type	_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize, @function
_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize:
.LFB10474:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$320, %rax
	movq	(%rax), %rbx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$256, %rax
	movq	(%rax), %rax
	movq	-48(%rbp), %rcx
	movq	-40(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rbx
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L114
	call	__stack_chk_fail@PLT
.L114:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10474:
	.size	_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize, .-_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize
	.section	.text._ZNK12wxWindowBase10GetMinSizeEv,"axG",@progbits,_ZNK12wxWindowBase10GetMinSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase10GetMinSizeEv
	.type	_ZNK12wxWindowBase10GetMinSizeEv, @function
_ZNK12wxWindowBase10GetMinSizeEv:
.LFB10475:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movl	148(%rax), %edx
	movq	-24(%rbp), %rax
	movl	144(%rax), %ecx
	leaq	-16(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN6wxSizeC1Eii
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L117
	call	__stack_chk_fail@PLT
.L117:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10475:
	.size	_ZNK12wxWindowBase10GetMinSizeEv, .-_ZNK12wxWindowBase10GetMinSizeEv
	.section	.text._ZNK12wxWindowBase10GetMaxSizeEv,"axG",@progbits,_ZNK12wxWindowBase10GetMaxSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase10GetMaxSizeEv
	.type	_ZNK12wxWindowBase10GetMaxSizeEv, @function
_ZNK12wxWindowBase10GetMaxSizeEv:
.LFB10476:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movl	156(%rax), %edx
	movq	-24(%rbp), %rax
	movl	152(%rax), %ecx
	leaq	-16(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN6wxSizeC1Eii
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L120
	call	__stack_chk_fail@PLT
.L120:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10476:
	.size	_ZNK12wxWindowBase10GetMaxSizeEv, .-_ZNK12wxWindowBase10GetMaxSizeEv
	.section	.text._ZNK12wxWindowBase16GetMinClientSizeEv,"axG",@progbits,_ZNK12wxWindowBase16GetMinClientSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase16GetMinClientSizeEv
	.type	_ZNK12wxWindowBase16GetMinClientSizeEv, @function
_ZNK12wxWindowBase16GetMinClientSizeEv:
.LFB10477:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$264, %rax
	movq	(%rax), %rbx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$344, %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rbx
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L123
	call	__stack_chk_fail@PLT
.L123:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10477:
	.size	_ZNK12wxWindowBase16GetMinClientSizeEv, .-_ZNK12wxWindowBase16GetMinClientSizeEv
	.section	.text._ZNK12wxWindowBase16GetMaxClientSizeEv,"axG",@progbits,_ZNK12wxWindowBase16GetMaxClientSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase16GetMaxClientSizeEv
	.type	_ZNK12wxWindowBase16GetMaxClientSizeEv, @function
_ZNK12wxWindowBase16GetMaxClientSizeEv:
.LFB10478:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$264, %rax
	movq	(%rax), %rbx
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$352, %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	*%rbx
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L126
	call	__stack_chk_fail@PLT
.L126:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10478:
	.size	_ZNK12wxWindowBase16GetMaxClientSizeEv, .-_ZNK12wxWindowBase16GetMaxClientSizeEv
	.section	.text._ZNK12wxWindowBase18GetBestVirtualSizeEv,"axG",@progbits,_ZNK12wxWindowBase18GetBestVirtualSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase18GetBestVirtualSizeEv
	.type	_ZNK12wxWindowBase18GetBestVirtualSizeEv, @function
_ZNK12wxWindowBase18GetBestVirtualSizeEv:
.LFB10487:
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
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase13GetClientSizeEv
	movq	%rax, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase11GetBestSizeEv@PLT
	movq	%rax, -40(%rbp)
	movl	-36(%rbp), %edx
	movl	-44(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_
	movl	%eax, %ebx
	movl	-40(%rbp), %edx
	movl	-48(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_
	movl	%eax, %ecx
	leaq	-32(%rbp), %rax
	movl	%ebx, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN6wxSizeC1Eii
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L129
	call	__stack_chk_fail@PLT
.L129:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10487:
	.size	_ZNK12wxWindowBase18GetBestVirtualSizeEv, .-_ZNK12wxWindowBase18GetBestVirtualSizeEv
	.section	.text._ZNK12wxWindowBase21GetContentScaleFactorEv,"axG",@progbits,_ZNK12wxWindowBase21GetContentScaleFactorEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase21GetContentScaleFactorEv
	.type	_ZNK12wxWindowBase21GetContentScaleFactorEv, @function
_ZNK12wxWindowBase21GetContentScaleFactorEv:
.LFB10488:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	.LC0(%rip), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10488:
	.size	_ZNK12wxWindowBase21GetContentScaleFactorEv, .-_ZNK12wxWindowBase21GetContentScaleFactorEv
	.section	.text._ZN12wxWindowBase26BeginRepositioningChildrenEv,"axG",@progbits,_ZN12wxWindowBase26BeginRepositioningChildrenEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase26BeginRepositioningChildrenEv
	.type	_ZN12wxWindowBase26BeginRepositioningChildrenEv, @function
_ZN12wxWindowBase26BeginRepositioningChildrenEv:
.LFB10491:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10491:
	.size	_ZN12wxWindowBase26BeginRepositioningChildrenEv, .-_ZN12wxWindowBase26BeginRepositioningChildrenEv
	.section	.text._ZN12wxWindowBase24EndRepositioningChildrenEv,"axG",@progbits,_ZN12wxWindowBase24EndRepositioningChildrenEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase24EndRepositioningChildrenEv
	.type	_ZN12wxWindowBase24EndRepositioningChildrenEv, @function
_ZN12wxWindowBase24EndRepositioningChildrenEv:
.LFB10492:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10492:
	.size	_ZN12wxWindowBase24EndRepositioningChildrenEv, .-_ZN12wxWindowBase24EndRepositioningChildrenEv
	.section	.text._ZN12wxWindowBase4HideEv,"axG",@progbits,_ZN12wxWindowBase4HideEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase4HideEv
	.type	_ZN12wxWindowBase4HideEv, @function
_ZN12wxWindowBase4HideEv:
.LFB10499:
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
	addq	$448, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	$0, %esi
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10499:
	.size	_ZN12wxWindowBase4HideEv, .-_ZN12wxWindowBase4HideEv
	.section	.text._ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj,"axG",@progbits,_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj,comdat
	.align 2
	.weak	_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj
	.type	_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj, @function
_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj:
.LFB10500:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$448, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movl	$1, %esi
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10500:
	.size	_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj, .-_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj
	.section	.text._ZN12wxWindowBase14HideWithEffectE12wxShowEffectj,"axG",@progbits,_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj,comdat
	.align 2
	.weak	_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj
	.type	_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj, @function
_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj:
.LFB10501:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN12wxWindowBase4HideEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10501:
	.size	_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj, .-_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj
	.section	.text._ZN12wxWindowBase18SetWindowStyleFlagEl,"axG",@progbits,_ZN12wxWindowBase18SetWindowStyleFlagEl,comdat
	.align 2
	.weak	_ZN12wxWindowBase18SetWindowStyleFlagEl
	.type	_ZN12wxWindowBase18SetWindowStyleFlagEl, @function
_ZN12wxWindowBase18SetWindowStyleFlagEl:
.LFB10505:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 336(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10505:
	.size	_ZN12wxWindowBase18SetWindowStyleFlagEl, .-_ZN12wxWindowBase18SetWindowStyleFlagEl
	.section	.text._ZNK12wxWindowBase18GetWindowStyleFlagEv,"axG",@progbits,_ZNK12wxWindowBase18GetWindowStyleFlagEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase18GetWindowStyleFlagEv
	.type	_ZNK12wxWindowBase18GetWindowStyleFlagEv, @function
_ZNK12wxWindowBase18GetWindowStyleFlagEv:
.LFB10506:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	336(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10506:
	.size	_ZNK12wxWindowBase18GetWindowStyleFlagEv, .-_ZNK12wxWindowBase18GetWindowStyleFlagEv
	.section	.text._ZN12wxWindowBase13SetExtraStyleEl,"axG",@progbits,_ZN12wxWindowBase13SetExtraStyleEl,comdat
	.align 2
	.weak	_ZN12wxWindowBase13SetExtraStyleEl
	.type	_ZN12wxWindowBase13SetExtraStyleEl, @function
_ZN12wxWindowBase13SetExtraStyleEl:
.LFB10511:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 344(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10511:
	.size	_ZN12wxWindowBase13SetExtraStyleEl, .-_ZN12wxWindowBase13SetExtraStyleEl
	.section	.text._ZN12wxWindowBase15SetThemeEnabledEb,"axG",@progbits,_ZN12wxWindowBase15SetThemeEnabledEb,comdat
	.align 2
	.weak	_ZN12wxWindowBase15SetThemeEnabledEb
	.type	_ZN12wxWindowBase15SetThemeEnabledEb, @function
_ZN12wxWindowBase15SetThemeEnabledEb:
.LFB10514:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movb	%al, -12(%rbp)
	movq	-8(%rbp), %rax
	movzbl	-12(%rbp), %edx
	movb	%dl, 400(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10514:
	.size	_ZN12wxWindowBase15SetThemeEnabledEb, .-_ZN12wxWindowBase15SetThemeEnabledEb
	.section	.text._ZNK12wxWindowBase15GetThemeEnabledEv,"axG",@progbits,_ZNK12wxWindowBase15GetThemeEnabledEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase15GetThemeEnabledEv
	.type	_ZNK12wxWindowBase15GetThemeEnabledEv, @function
_ZNK12wxWindowBase15GetThemeEnabledEv:
.LFB10515:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	400(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10515:
	.size	_ZNK12wxWindowBase15GetThemeEnabledEv, .-_ZNK12wxWindowBase15GetThemeEnabledEv
	.section	.text._ZN12wxWindowBase15SetFocusFromKbdEv,"axG",@progbits,_ZN12wxWindowBase15SetFocusFromKbdEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase15SetFocusFromKbdEv
	.type	_ZN12wxWindowBase15SetFocusFromKbdEv, @function
_ZN12wxWindowBase15SetFocusFromKbdEv:
.LFB10516:
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
	addq	$552, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10516:
	.size	_ZN12wxWindowBase15SetFocusFromKbdEv, .-_ZN12wxWindowBase15SetFocusFromKbdEv
	.section	.text._ZNK12wxWindowBase12AcceptsFocusEv,"axG",@progbits,_ZNK12wxWindowBase12AcceptsFocusEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase12AcceptsFocusEv
	.type	_ZNK12wxWindowBase12AcceptsFocusEv, @function
_ZNK12wxWindowBase12AcceptsFocusEv:
.LFB10517:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10517:
	.size	_ZNK12wxWindowBase12AcceptsFocusEv, .-_ZNK12wxWindowBase12AcceptsFocusEv
	.section	.text._ZNK12wxWindowBase23AcceptsFocusRecursivelyEv,"axG",@progbits,_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv
	.type	_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv, @function
_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv:
.LFB10518:
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
	addq	$576, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10518:
	.size	_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv, .-_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv
	.section	.text._ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv,"axG",@progbits,_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv
	.type	_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv, @function
_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv:
.LFB10519:
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
	addq	$576, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10519:
	.size	_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv, .-_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv
	.section	.text._ZNK12wxWindowBase12CanBeFocusedEv,"axG",@progbits,_ZNK12wxWindowBase12CanBeFocusedEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase12CanBeFocusedEv
	.type	_ZNK12wxWindowBase12CanBeFocusedEv, @function
_ZNK12wxWindowBase12CanBeFocusedEv:
.LFB10520:
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
	addq	$480, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	testb	%al, %al
	je	.L156
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase9IsEnabledEv@PLT
	testb	%al, %al
	je	.L156
	movl	$1, %eax
	jmp	.L157
.L156:
	movl	$0, %eax
.L157:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10520:
	.size	_ZNK12wxWindowBase12CanBeFocusedEv, .-_ZNK12wxWindowBase12CanBeFocusedEv
	.section	.text._ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow,"axG",@progbits,_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow,comdat
	.align 2
	.weak	_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow
	.type	_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow, @function
_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow:
.LFB10535:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10535:
	.size	_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow, .-_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow
	.section	.text._ZNK12wxWindowBase15GetEventHandlerEv,"axG",@progbits,_ZNK12wxWindowBase15GetEventHandlerEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase15GetEventHandlerEv
	.type	_ZNK12wxWindowBase15GetEventHandlerEv, @function
_ZNK12wxWindowBase15GetEventHandlerEv:
.LFB10536:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	160(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10536:
	.size	_ZNK12wxWindowBase15GetEventHandlerEv, .-_ZNK12wxWindowBase15GetEventHandlerEv
	.section	.text._ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent,"axG",@progbits,_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent,comdat
	.align 2
	.weak	_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent
	.type	_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent, @function
_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent:
.LFB10538:
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
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase15GetEventHandlerEv
	movq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZN12wxEvtHandler19ProcessEventLocallyER7wxEvent@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10538:
	.size	_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent, .-_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent
	.section	.text._ZN12wxWindowBase12GetValidatorEv,"axG",@progbits,_ZN12wxWindowBase12GetValidatorEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase12GetValidatorEv
	.type	_ZN12wxWindowBase12GetValidatorEv, @function
_ZN12wxWindowBase12GetValidatorEv:
.LFB10539:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	168(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10539:
	.size	_ZN12wxWindowBase12GetValidatorEv, .-_ZN12wxWindowBase12GetValidatorEv
	.section	.text._ZN18wxAcceleratorTableaSERKS_,"axG",@progbits,_ZN18wxAcceleratorTableaSERKS_,comdat
	.align 2
	.weak	_ZN18wxAcceleratorTableaSERKS_
	.type	_ZN18wxAcceleratorTableaSERKS_, @function
_ZN18wxAcceleratorTableaSERKS_:
.LFB10541:
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
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxObjectaSERKS_
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10541:
	.size	_ZN18wxAcceleratorTableaSERKS_, .-_ZN18wxAcceleratorTableaSERKS_
	.section	.text._ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable,"axG",@progbits,_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable,comdat
	.align 2
	.weak	_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable
	.type	_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable, @function
_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable:
.LFB10540:
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
	leaq	272(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZN18wxAcceleratorTableaSERKS_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10540:
	.size	_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable, .-_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable
	.section	.text._ZNK12wxWindowBase10HasCaptureEv,"axG",@progbits,_ZNK12wxWindowBase10HasCaptureEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase10HasCaptureEv
	.type	_ZNK12wxWindowBase10HasCaptureEv, @function
_ZNK12wxWindowBase10HasCaptureEv:
.LFB10545:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	call	_ZN12wxWindowBase10GetCaptureEv@PLT
	cmpq	%rax, -8(%rbp)
	sete	%al
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10545:
	.size	_ZNK12wxWindowBase10HasCaptureEv, .-_ZNK12wxWindowBase10HasCaptureEv
	.section	.text._ZN12wxWindowBase9PrepareDCER4wxDC,"axG",@progbits,_ZN12wxWindowBase9PrepareDCER4wxDC,comdat
	.align 2
	.weak	_ZN12wxWindowBase9PrepareDCER4wxDC
	.type	_ZN12wxWindowBase9PrepareDCER4wxDC, @function
_ZN12wxWindowBase9PrepareDCER4wxDC:
.LFB10549:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10549:
	.size	_ZN12wxWindowBase9PrepareDCER4wxDC, .-_ZN12wxWindowBase9PrepareDCER4wxDC
	.section	.text._ZNK12wxWindowBase20GetDefaultAttributesEv,"axG",@progbits,_ZNK12wxWindowBase20GetDefaultAttributesEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase20GetDefaultAttributesEv
	.type	_ZNK12wxWindowBase20GetDefaultAttributesEv, @function
_ZNK12wxWindowBase20GetDefaultAttributesEv:
.LFB10557:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase16GetWindowVariantEv
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN12wxWindowBase25GetClassDefaultAttributesE15wxWindowVariant@PLT
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L175
	call	__stack_chk_fail@PLT
.L175:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10557:
	.size	_ZNK12wxWindowBase20GetDefaultAttributesEv, .-_ZNK12wxWindowBase20GetDefaultAttributesEv
	.section	.text._ZN12wxWindowBase24HasTransparentBackgroundEv,"axG",@progbits,_ZN12wxWindowBase24HasTransparentBackgroundEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase24HasTransparentBackgroundEv
	.type	_ZN12wxWindowBase24HasTransparentBackgroundEv, @function
_ZN12wxWindowBase24HasTransparentBackgroundEv:
.LFB10575:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10575:
	.size	_ZN12wxWindowBase24HasTransparentBackgroundEv, .-_ZN12wxWindowBase24HasTransparentBackgroundEv
	.section	.text._ZNK12wxWindowBase16HasMultiplePagesEv,"axG",@progbits,_ZNK12wxWindowBase16HasMultiplePagesEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase16HasMultiplePagesEv
	.type	_ZNK12wxWindowBase16HasMultiplePagesEv, @function
_ZNK12wxWindowBase16HasMultiplePagesEv:
.LFB10591:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10591:
	.size	_ZNK12wxWindowBase16HasMultiplePagesEv, .-_ZNK12wxWindowBase16HasMultiplePagesEv
	.section	.text._ZN12wxWindowBase20AlwaysShowScrollbarsEbb,"axG",@progbits,_ZN12wxWindowBase20AlwaysShowScrollbarsEbb,comdat
	.align 2
	.weak	_ZN12wxWindowBase20AlwaysShowScrollbarsEbb
	.type	_ZN12wxWindowBase20AlwaysShowScrollbarsEbb, @function
_ZN12wxWindowBase20AlwaysShowScrollbarsEbb:
.LFB10598:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %ecx
	movl	%edx, %eax
	movl	%ecx, %edx
	movb	%dl, -12(%rbp)
	movb	%al, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10598:
	.size	_ZN12wxWindowBase20AlwaysShowScrollbarsEbb, .-_ZN12wxWindowBase20AlwaysShowScrollbarsEbb
	.section	.text._ZNK12wxWindowBase22IsScrollbarAlwaysShownEi,"axG",@progbits,_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi,comdat
	.align 2
	.weak	_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi
	.type	_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi, @function
_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi:
.LFB10599:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10599:
	.size	_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi, .-_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi
	.section	.text._ZNK12wxWindowBase13GetDropTargetEv,"axG",@progbits,_ZNK12wxWindowBase13GetDropTargetEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase13GetDropTargetEv
	.type	_ZNK12wxWindowBase13GetDropTargetEv, @function
_ZNK12wxWindowBase13GetDropTargetEv:
.LFB10604:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	176(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10604:
	.size	_ZNK12wxWindowBase13GetDropTargetEv, .-_ZNK12wxWindowBase13GetDropTargetEv
	.section	.text._ZN12wxWindowBase14SetTransparentEh,"axG",@progbits,_ZN12wxWindowBase14SetTransparentEh,comdat
	.align 2
	.weak	_ZN12wxWindowBase14SetTransparentEh
	.type	_ZN12wxWindowBase14SetTransparentEh, @function
_ZN12wxWindowBase14SetTransparentEh:
.LFB10611:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movb	%al, -12(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10611:
	.size	_ZN12wxWindowBase14SetTransparentEh, .-_ZN12wxWindowBase14SetTransparentEh
	.section	.text._ZN12wxWindowBase17CanSetTransparentEv,"axG",@progbits,_ZN12wxWindowBase17CanSetTransparentEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase17CanSetTransparentEv
	.type	_ZN12wxWindowBase17CanSetTransparentEv, @function
_ZN12wxWindowBase17CanSetTransparentEv:
.LFB10612:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10612:
	.size	_ZN12wxWindowBase17CanSetTransparentEv, .-_ZN12wxWindowBase17CanSetTransparentEv
	.section	.text._ZN12wxWindowBase15AssociateHandleEP10_GtkWidget,"axG",@progbits,_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget,comdat
	.align 2
	.weak	_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget
	.type	_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget, @function
_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget:
.LFB10613:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10613:
	.size	_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget, .-_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget
	.section	.text._ZN12wxWindowBase16DissociateHandleEv,"axG",@progbits,_ZN12wxWindowBase16DissociateHandleEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase16DissociateHandleEv
	.type	_ZN12wxWindowBase16DissociateHandleEv, @function
_ZN12wxWindowBase16DissociateHandleEv:
.LFB10614:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10614:
	.size	_ZN12wxWindowBase16DissociateHandleEv, .-_ZN12wxWindowBase16DissociateHandleEv
	.section	.text._ZNK12wxWindowBase20ShouldInheritColoursEv,"axG",@progbits,_ZNK12wxWindowBase20ShouldInheritColoursEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase20ShouldInheritColoursEv
	.type	_ZNK12wxWindowBase20ShouldInheritColoursEv, @function
_ZNK12wxWindowBase20ShouldInheritColoursEv:
.LFB10623:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10623:
	.size	_ZNK12wxWindowBase20ShouldInheritColoursEv, .-_ZNK12wxWindowBase20ShouldInheritColoursEv
	.section	.text._ZNK12wxWindowBase22CanBeOutsideClientAreaEv,"axG",@progbits,_ZNK12wxWindowBase22CanBeOutsideClientAreaEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase22CanBeOutsideClientAreaEv
	.type	_ZNK12wxWindowBase22CanBeOutsideClientAreaEv, @function
_ZNK12wxWindowBase22CanBeOutsideClientAreaEv:
.LFB10624:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10624:
	.size	_ZNK12wxWindowBase22CanBeOutsideClientAreaEv, .-_ZNK12wxWindowBase22CanBeOutsideClientAreaEv
	.section	.text._ZNK12wxWindowBase19CanApplyThemeBorderEv,"axG",@progbits,_ZNK12wxWindowBase19CanApplyThemeBorderEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase19CanApplyThemeBorderEv
	.type	_ZNK12wxWindowBase19CanApplyThemeBorderEv, @function
_ZNK12wxWindowBase19CanApplyThemeBorderEv:
.LFB10625:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10625:
	.size	_ZNK12wxWindowBase19CanApplyThemeBorderEv, .-_ZNK12wxWindowBase19CanApplyThemeBorderEv
	.section	.text._ZN12wxWindowBase31GetMainWindowOfCompositeControlEv,"axG",@progbits,_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv,comdat
	.align 2
	.weak	_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv
	.type	_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv, @function
_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv:
.LFB10626:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10626:
	.size	_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv, .-_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv
	.section	.text._ZNK12wxWindowBase21IsTopNavigationDomainEv,"axG",@progbits,_ZNK12wxWindowBase21IsTopNavigationDomainEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase21IsTopNavigationDomainEv
	.type	_ZNK12wxWindowBase21IsTopNavigationDomainEv, @function
_ZNK12wxWindowBase21IsTopNavigationDomainEv:
.LFB10627:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10627:
	.size	_ZNK12wxWindowBase21IsTopNavigationDomainEv, .-_ZNK12wxWindowBase21IsTopNavigationDomainEv
	.section	.text._ZNK12wxWindowBase26GetDefaultBorderForControlEv,"axG",@progbits,_ZNK12wxWindowBase26GetDefaultBorderForControlEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase26GetDefaultBorderForControlEv
	.type	_ZNK12wxWindowBase26GetDefaultBorderForControlEv, @function
_ZNK12wxWindowBase26GetDefaultBorderForControlEv:
.LFB10629:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$268435456, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10629:
	.size	_ZNK12wxWindowBase26GetDefaultBorderForControlEv, .-_ZNK12wxWindowBase26GetDefaultBorderForControlEv
	.section	.text._ZNK12wxWindowBase19DoGetBestClientSizeEv,"axG",@progbits,_ZNK12wxWindowBase19DoGetBestClientSizeEv,comdat
	.align 2
	.weak	_ZNK12wxWindowBase19DoGetBestClientSizeEv
	.type	_ZNK12wxWindowBase19DoGetBestClientSizeEv, @function
_ZNK12wxWindowBase19DoGetBestClientSizeEv:
.LFB10632:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	wxDefaultSize(%rip), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10632:
	.size	_ZNK12wxWindowBase19DoGetBestClientSizeEv, .-_ZNK12wxWindowBase19DoGetBestClientSizeEv
	.section	.text._ZNK12wxWindowBase21DoGetBestClientHeightEi,"axG",@progbits,_ZNK12wxWindowBase21DoGetBestClientHeightEi,comdat
	.align 2
	.weak	_ZNK12wxWindowBase21DoGetBestClientHeightEi
	.type	_ZNK12wxWindowBase21DoGetBestClientHeightEi, @function
_ZNK12wxWindowBase21DoGetBestClientHeightEi:
.LFB10633:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	$-1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10633:
	.size	_ZNK12wxWindowBase21DoGetBestClientHeightEi, .-_ZNK12wxWindowBase21DoGetBestClientHeightEi
	.section	.text._ZNK12wxWindowBase20DoGetBestClientWidthEi,"axG",@progbits,_ZNK12wxWindowBase20DoGetBestClientWidthEi,comdat
	.align 2
	.weak	_ZNK12wxWindowBase20DoGetBestClientWidthEi
	.type	_ZNK12wxWindowBase20DoGetBestClientWidthEi, @function
_ZNK12wxWindowBase20DoGetBestClientWidthEi:
.LFB10634:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	$-1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10634:
	.size	_ZNK12wxWindowBase20DoGetBestClientWidthEi, .-_ZNK12wxWindowBase20DoGetBestClientWidthEi
	.section	.text._ZN12wxWindowBase18SetInitialBestSizeERK6wxSize,"axG",@progbits,_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize,comdat
	.align 2
	.weak	_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize
	.type	_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize, @function
_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize:
.LFB10640:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN12wxWindowBase14SetInitialSizeERK6wxSize@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10640:
	.size	_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize, .-_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize
	.section	.text._ZN8wxWindow8SetLabelERK8wxString,"axG",@progbits,_ZN8wxWindow8SetLabelERK8wxString,comdat
	.align 2
	.weak	_ZN8wxWindow8SetLabelERK8wxString
	.type	_ZN8wxWindow8SetLabelERK8wxString, @function
_ZN8wxWindow8SetLabelERK8wxString:
.LFB10731:
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
	leaq	512(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZN8wxStringaSERKS_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10731:
	.size	_ZN8wxWindow8SetLabelERK8wxString, .-_ZN8wxWindow8SetLabelERK8wxString
	.section	.text._ZNK8wxWindow8GetLabelEv,"axG",@progbits,_ZNK8wxWindow8GetLabelEv,comdat
	.align 2
	.weak	_ZNK8wxWindow8GetLabelEv
	.type	_ZNK8wxWindow8GetLabelEv, @function
_ZNK8wxWindow8GetLabelEv:
.LFB10732:
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
	leaq	512(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxStringC1ERKS_
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10732:
	.size	_ZNK8wxWindow8GetLabelEv, .-_ZNK8wxWindow8GetLabelEv
	.section	.text._ZNK8wxWindow9GetHandleEv,"axG",@progbits,_ZNK8wxWindow9GetHandleEv,comdat
	.align 2
	.weak	_ZNK8wxWindow9GetHandleEv
	.type	_ZNK8wxWindow9GetHandleEv, @function
_ZNK8wxWindow9GetHandleEv:
.LFB10733:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	496(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10733:
	.size	_ZNK8wxWindow9GetHandleEv, .-_ZNK8wxWindow9GetHandleEv
	.section	.text._ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv,"axG",@progbits,_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv,comdat
	.align 2
	.weak	_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv
	.type	_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv, @function
_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv:
.LFB10735:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10735:
	.size	_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv, .-_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv
	.section	.text._ZNK8wxWindow24GTKIsTransparentForMouseEv,"axG",@progbits,_ZNK8wxWindow24GTKIsTransparentForMouseEv,comdat
	.align 2
	.weak	_ZNK8wxWindow24GTKIsTransparentForMouseEv
	.type	_ZNK8wxWindow24GTKIsTransparentForMouseEv, @function
_ZNK8wxWindow24GTKIsTransparentForMouseEv:
.LFB10737:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10737:
	.size	_ZNK8wxWindow24GTKIsTransparentForMouseEv, .-_ZNK8wxWindow24GTKIsTransparentForMouseEv
	.section	.text._ZNK8wxWindow14GTKNeedsParentEv,"axG",@progbits,_ZNK8wxWindow14GTKNeedsParentEv,comdat
	.align 2
	.weak	_ZNK8wxWindow14GTKNeedsParentEv
	.type	_ZNK8wxWindow14GTKNeedsParentEv, @function
_ZNK8wxWindow14GTKNeedsParentEv:
.LFB10741:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$616, %rax
	movq	(%rax), %rax
	movq	%rdx, %rdi
	call	*%rax
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10741:
	.size	_ZNK8wxWindow14GTKNeedsParentEv, .-_ZNK8wxWindow14GTKNeedsParentEv
	.section	.rodata
	.type	_ZL25wxIMAGE_ALPHA_TRANSPARENT, @object
	.size	_ZL25wxIMAGE_ALPHA_TRANSPARENT, 1
_ZL25wxIMAGE_ALPHA_TRANSPARENT:
	.zero	1
	.type	_ZL23wxIMAGE_ALPHA_THRESHOLD, @object
	.size	_ZL23wxIMAGE_ALPHA_THRESHOLD, 1
_ZL23wxIMAGE_ALPHA_THRESHOLD:
	.byte	-128
	.type	_ZL20wxIMAGE_ALPHA_OPAQUE, @object
	.size	_ZL20wxIMAGE_ALPHA_OPAQUE, 1
_ZL20wxIMAGE_ALPHA_OPAQUE:
	.byte	-1
	.section	.text._ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i,"axG",@progbits,_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i,comdat
	.align 2
	.weak	_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i
	.type	_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i, @function
_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i:
.LFB11069:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movl	%ecx, -28(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11069:
	.size	_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i, .-_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i
	.section	.text._ZN20wxNonOwnedWindowBase17InheritAttributesEv,"axG",@progbits,_ZN20wxNonOwnedWindowBase17InheritAttributesEv,comdat
	.align 2
	.weak	_ZN20wxNonOwnedWindowBase17InheritAttributesEv
	.type	_ZN20wxNonOwnedWindowBase17InheritAttributesEv, @function
_ZN20wxNonOwnedWindowBase17InheritAttributesEv:
.LFB11070:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11070:
	.size	_ZN20wxNonOwnedWindowBase17InheritAttributesEv, .-_ZN20wxNonOwnedWindowBase17InheritAttributesEv
	.section	.text._ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv,"axG",@progbits,_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv
	.type	_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv, @function
_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv:
.LFB11178:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11178:
	.size	_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv, .-_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv
	.section	.text._ZNK20wxTopLevelWindowBase10IsTopLevelEv,"axG",@progbits,_ZNK20wxTopLevelWindowBase10IsTopLevelEv,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase10IsTopLevelEv
	.type	_ZNK20wxTopLevelWindowBase10IsTopLevelEv, @function
_ZNK20wxTopLevelWindowBase10IsTopLevelEv:
.LFB11185:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11185:
	.size	_ZNK20wxTopLevelWindowBase10IsTopLevelEv, .-_ZNK20wxTopLevelWindowBase10IsTopLevelEv
	.section	.text._ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv,"axG",@progbits,_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv
	.type	_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv, @function
_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv:
.LFB11186:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11186:
	.size	_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv, .-_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv
	.section	.text._ZNK20wxTopLevelWindowBase9IsVisibleEv,"axG",@progbits,_ZNK20wxTopLevelWindowBase9IsVisibleEv,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase9IsVisibleEv
	.type	_ZNK20wxTopLevelWindowBase9IsVisibleEv, @function
_ZNK20wxTopLevelWindowBase9IsVisibleEv:
.LFB11187:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$480, %rax
	movq	(%rax), %rax
	movq	%rdx, %rdi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11187:
	.size	_ZNK20wxTopLevelWindowBase9IsVisibleEv, .-_ZNK20wxTopLevelWindowBase9IsVisibleEv
	.section	.text._ZN20wxTopLevelWindowBase14OSXSetModifiedEb,"axG",@progbits,_ZN20wxTopLevelWindowBase14OSXSetModifiedEb,comdat
	.align 2
	.weak	_ZN20wxTopLevelWindowBase14OSXSetModifiedEb
	.type	_ZN20wxTopLevelWindowBase14OSXSetModifiedEb, @function
_ZN20wxTopLevelWindowBase14OSXSetModifiedEb:
.LFB11190:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, %eax
	movb	%al, -12(%rbp)
	movq	-8(%rbp), %rax
	movzbl	-12(%rbp), %edx
	movb	%dl, 720(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11190:
	.size	_ZN20wxTopLevelWindowBase14OSXSetModifiedEb, .-_ZN20wxTopLevelWindowBase14OSXSetModifiedEb
	.section	.text._ZNK20wxTopLevelWindowBase13OSXIsModifiedEv,"axG",@progbits,_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv
	.type	_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv, @function
_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv:
.LFB11191:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	720(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11191:
	.size	_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv, .-_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv
	.section	.text._ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString,"axG",@progbits,_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString,comdat
	.align 2
	.weak	_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString
	.type	_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString, @function
_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString:
.LFB11192:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11192:
	.size	_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString, .-_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString
	.section	.text._ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_,"axG",@progbits,_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_,comdat
	.align 2
	.weak	_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_
	.type	_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_, @function
_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_:
.LFB11194:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$1288, %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	%rcx, %rdi
	call	*%rax
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11194:
	.size	_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_, .-_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_
	.section	.text._ZNK19wxTopLevelWindowGTK12IsFullScreenEv,"axG",@progbits,_ZNK19wxTopLevelWindowGTK12IsFullScreenEv,comdat
	.align 2
	.weak	_ZNK19wxTopLevelWindowGTK12IsFullScreenEv
	.type	_ZNK19wxTopLevelWindowGTK12IsFullScreenEv, @function
_ZNK19wxTopLevelWindowGTK12IsFullScreenEv:
.LFB11204:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	736(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11204:
	.size	_ZNK19wxTopLevelWindowGTK12IsFullScreenEv, .-_ZNK19wxTopLevelWindowGTK12IsFullScreenEv
	.section	.text._ZNK19wxTopLevelWindowGTK8GetTitleEv,"axG",@progbits,_ZNK19wxTopLevelWindowGTK8GetTitleEv,comdat
	.align 2
	.weak	_ZNK19wxTopLevelWindowGTK8GetTitleEv
	.type	_ZNK19wxTopLevelWindowGTK8GetTitleEv, @function
_ZNK19wxTopLevelWindowGTK8GetTitleEv:
.LFB11205:
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
	leaq	800(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8wxStringC1ERKS_
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11205:
	.size	_ZNK19wxTopLevelWindowGTK8GetTitleEv, .-_ZNK19wxTopLevelWindowGTK8GetTitleEv
	.section	.text._ZN19wxTopLevelWindowGTK8SetLabelERK8wxString,"axG",@progbits,_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString,comdat
	.align 2
	.weak	_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString
	.type	_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString, @function
_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString:
.LFB11206:
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
	movq	(%rax), %rax
	addq	$1656, %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11206:
	.size	_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString, .-_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString
	.section	.text._ZNK19wxTopLevelWindowGTK8GetLabelEv,"axG",@progbits,_ZNK19wxTopLevelWindowGTK8GetLabelEv,comdat
	.align 2
	.weak	_ZNK19wxTopLevelWindowGTK8GetLabelEv
	.type	_ZNK19wxTopLevelWindowGTK8GetLabelEv, @function
_ZNK19wxTopLevelWindowGTK8GetLabelEv:
.LFB11207:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	addq	$1664, %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L243
	call	__stack_chk_fail@PLT
.L243:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11207:
	.size	_ZNK19wxTopLevelWindowGTK8GetLabelEv, .-_ZNK19wxTopLevelWindowGTK8GetLabelEv
	.section	.text._ZNK19wxTopLevelWindowGTK9IsGrabbedEv,"axG",@progbits,_ZNK19wxTopLevelWindowGTK9IsGrabbedEv,comdat
	.align 2
	.weak	_ZNK19wxTopLevelWindowGTK9IsGrabbedEv
	.type	_ZNK19wxTopLevelWindowGTK9IsGrabbedEv, @function
_ZNK19wxTopLevelWindowGTK9IsGrabbedEv:
.LFB11208:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	861(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11208:
	.size	_ZNK19wxTopLevelWindowGTK9IsGrabbedEv, .-_ZNK19wxTopLevelWindowGTK9IsGrabbedEv
	.section	.text._ZNK11wxFrameBase10GetMenuBarEv,"axG",@progbits,_ZNK11wxFrameBase10GetMenuBarEv,comdat
	.align 2
	.weak	_ZNK11wxFrameBase10GetMenuBarEv
	.type	_ZNK11wxFrameBase10GetMenuBarEv, @function
_ZNK11wxFrameBase10GetMenuBarEv:
.LFB11297:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	864(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11297:
	.size	_ZNK11wxFrameBase10GetMenuBarEv, .-_ZNK11wxFrameBase10GetMenuBarEv
	.section	.text._ZNK11wxFrameBase12GetStatusBarEv,"axG",@progbits,_ZNK11wxFrameBase12GetStatusBarEv,comdat
	.align 2
	.weak	_ZNK11wxFrameBase12GetStatusBarEv
	.type	_ZNK11wxFrameBase12GetStatusBarEv, @function
_ZNK11wxFrameBase12GetStatusBarEv:
.LFB11298:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	968(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11298:
	.size	_ZNK11wxFrameBase12GetStatusBarEv, .-_ZNK11wxFrameBase12GetStatusBarEv
	.section	.text._ZNK11wxFrameBase10GetToolBarEv,"axG",@progbits,_ZNK11wxFrameBase10GetToolBarEv,comdat
	.align 2
	.weak	_ZNK11wxFrameBase10GetToolBarEv
	.type	_ZNK11wxFrameBase10GetToolBarEv, @function
_ZNK11wxFrameBase10GetToolBarEv:
.LFB11301:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	984(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11301:
	.size	_ZNK11wxFrameBase10GetToolBarEv, .-_ZNK11wxFrameBase10GetToolBarEv
	.section	.text._ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow,"axG",@progbits,_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow,comdat
	.align 2
	.weak	_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow
	.type	_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow, @function
_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow:
.LFB11302:
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
	movq	(%rax), %rax
	addq	$1752, %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	xorl	$1, %eax
	testb	%al, %al
	je	.L253
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow
	testb	%al, %al
	je	.L253
	movl	$1, %eax
	jmp	.L254
.L253:
	movl	$0, %eax
.L254:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11302:
	.size	_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow, .-_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow
	.section	.text._ZN11wxFrameBase15PositionMenuBarEv,"axG",@progbits,_ZN11wxFrameBase15PositionMenuBarEv,comdat
	.align 2
	.weak	_ZN11wxFrameBase15PositionMenuBarEv
	.type	_ZN11wxFrameBase15PositionMenuBarEv, @function
_ZN11wxFrameBase15PositionMenuBarEv:
.LFB11303:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11303:
	.size	_ZN11wxFrameBase15PositionMenuBarEv, .-_ZN11wxFrameBase15PositionMenuBarEv
	.section	.text._ZN11wxFrameBase17PositionStatusBarEv,"axG",@progbits,_ZN11wxFrameBase17PositionStatusBarEv,comdat
	.align 2
	.weak	_ZN11wxFrameBase17PositionStatusBarEv
	.type	_ZN11wxFrameBase17PositionStatusBarEv, @function
_ZN11wxFrameBase17PositionStatusBarEv:
.LFB11304:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11304:
	.size	_ZN11wxFrameBase17PositionStatusBarEv, .-_ZN11wxFrameBase17PositionStatusBarEv
	.section	.text._ZN11wxFrameBase15PositionToolBarEv,"axG",@progbits,_ZN11wxFrameBase15PositionToolBarEv,comdat
	.align 2
	.weak	_ZN11wxFrameBase15PositionToolBarEv
	.type	_ZN11wxFrameBase15PositionToolBarEv, @function
_ZN11wxFrameBase15PositionToolBarEv:
.LFB11305:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11305:
	.size	_ZN11wxFrameBase15PositionToolBarEv, .-_ZN11wxFrameBase15PositionToolBarEv
	.section	.text._ZNK7wxFrame19GetClientAreaOriginEv,"axG",@progbits,_ZNK7wxFrame19GetClientAreaOriginEv,comdat
	.align 2
	.weak	_ZNK7wxFrame19GetClientAreaOriginEv
	.type	_ZNK7wxFrame19GetClientAreaOriginEv, @function
_ZNK7wxFrame19GetClientAreaOriginEv:
.LFB11312:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN7wxPointC1Eii
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L261
	call	__stack_chk_fail@PLT
.L261:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11312:
	.size	_ZNK7wxFrame19GetClientAreaOriginEv, .-_ZNK7wxFrame19GetClientAreaOriginEv
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.align 8
	.type	_ZL21wxOutOfRangeTextCoord, @object
	.size	_ZL21wxOutOfRangeTextCoord, 8
_ZL21wxOutOfRangeTextCoord:
	.quad	-1
	.align 8
	.type	_ZL18wxInvalidTextCoord, @object
	.size	_ZL18wxInvalidTextCoord, 8
_ZL18wxInvalidTextCoord:
	.quad	-2
	.section	.text._ZNK20wxMDIParentFrameBase14GetActiveChildEv,"axG",@progbits,_ZNK20wxMDIParentFrameBase14GetActiveChildEv,comdat
	.align 2
	.weak	_ZNK20wxMDIParentFrameBase14GetActiveChildEv
	.type	_ZNK20wxMDIParentFrameBase14GetActiveChildEv, @function
_ZNK20wxMDIParentFrameBase14GetActiveChildEv:
.LFB14209:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	1008(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14209:
	.size	_ZNK20wxMDIParentFrameBase14GetActiveChildEv, .-_ZNK20wxMDIParentFrameBase14GetActiveChildEv
	.section	.text._ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame,"axG",@progbits,_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame
	.type	_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame, @function
_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame:
.LFB14210:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 1008(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14210:
	.size	_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame, .-_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame
	.section	.text._ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu,"axG",@progbits,_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu
	.type	_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu, @function
_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu:
.LFB14213:
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
	movq	1016(%rax), %rax
	cmpq	%rax, -16(%rbp)
	je	.L268
	movq	-8(%rbp), %rax
	movq	1016(%rax), %rax
	testq	%rax, %rax
	je	.L267
	movq	-8(%rbp), %rax
	movq	1016(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	1016(%rax), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rdx, %rdi
	call	*%rax
.L267:
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 1016(%rax)
.L268:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14213:
	.size	_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu, .-_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu
	.section	.text._ZN20wxMDIParentFrameBase7CascadeEv,"axG",@progbits,_ZN20wxMDIParentFrameBase7CascadeEv,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase7CascadeEv
	.type	_ZN20wxMDIParentFrameBase7CascadeEv, @function
_ZN20wxMDIParentFrameBase7CascadeEv:
.LFB14214:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14214:
	.size	_ZN20wxMDIParentFrameBase7CascadeEv, .-_ZN20wxMDIParentFrameBase7CascadeEv
	.section	.text._ZN20wxMDIParentFrameBase4TileE13wxOrientation,"axG",@progbits,_ZN20wxMDIParentFrameBase4TileE13wxOrientation,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase4TileE13wxOrientation
	.type	_ZN20wxMDIParentFrameBase4TileE13wxOrientation, @function
_ZN20wxMDIParentFrameBase4TileE13wxOrientation:
.LFB14215:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14215:
	.size	_ZN20wxMDIParentFrameBase4TileE13wxOrientation, .-_ZN20wxMDIParentFrameBase4TileE13wxOrientation
	.section	.text._ZN20wxMDIParentFrameBase12ArrangeIconsEv,"axG",@progbits,_ZN20wxMDIParentFrameBase12ArrangeIconsEv,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase12ArrangeIconsEv
	.type	_ZN20wxMDIParentFrameBase12ArrangeIconsEv, @function
_ZN20wxMDIParentFrameBase12ArrangeIconsEv:
.LFB14216:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14216:
	.size	_ZN20wxMDIParentFrameBase12ArrangeIconsEv, .-_ZN20wxMDIParentFrameBase12ArrangeIconsEv
	.section	.text._ZN21wxMDIClientWindowBaseC2Ev,"axG",@progbits,_ZN21wxMDIClientWindowBaseC5Ev,comdat
	.align 2
	.weak	_ZN21wxMDIClientWindowBaseC2Ev
	.type	_ZN21wxMDIClientWindowBaseC2Ev, @function
_ZN21wxMDIClientWindowBaseC2Ev:
.LFB14275:
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
	call	_ZN8wxWindowC2Ev@PLT
	leaq	16+_ZTV21wxMDIClientWindowBase(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14275:
	.size	_ZN21wxMDIClientWindowBaseC2Ev, .-_ZN21wxMDIClientWindowBaseC2Ev
	.weak	_ZN21wxMDIClientWindowBaseC1Ev
	.set	_ZN21wxMDIClientWindowBaseC1Ev,_ZN21wxMDIClientWindowBaseC2Ev
	.section	.text._ZN17wxMDIClientWindowC2Ev,"axG",@progbits,_ZN17wxMDIClientWindowC5Ev,comdat
	.align 2
	.weak	_ZN17wxMDIClientWindowC2Ev
	.type	_ZN17wxMDIClientWindowC2Ev, @function
_ZN17wxMDIClientWindowC2Ev:
.LFB14281:
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
	call	_ZN21wxMDIClientWindowBaseC2Ev
	leaq	16+_ZTV17wxMDIClientWindow(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14281:
	.size	_ZN17wxMDIClientWindowC2Ev, .-_ZN17wxMDIClientWindowC2Ev
	.weak	_ZN17wxMDIClientWindowC1Ev
	.set	_ZN17wxMDIClientWindowC1Ev,_ZN17wxMDIClientWindowC2Ev
	.section	.text._ZN20wxMDIParentFrameBase14OnCreateClientEv,"axG",@progbits,_ZN20wxMDIParentFrameBase14OnCreateClientEv,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase14OnCreateClientEv
	.type	_ZN20wxMDIParentFrameBase14OnCreateClientEv, @function
_ZN20wxMDIParentFrameBase14OnCreateClientEv:
.LFB14283:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA14283
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
	movl	$648, %edi
.LEHB6:
	call	_Znwm@PLT
.LEHE6:
	movq	%rax, %rbx
	movq	%rbx, %rdi
.LEHB7:
	call	_ZN17wxMDIClientWindowC1Ev
.LEHE7:
	movq	%rbx, %rax
	jmp	.L278
.L277:
	movq	%rax, %r12
	movl	$648, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
.LEHB8:
	call	_Unwind_Resume@PLT
.LEHE8:
.L278:
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14283:
	.section	.gcc_except_table._ZN20wxMDIParentFrameBase14OnCreateClientEv,"aG",@progbits,_ZN20wxMDIParentFrameBase14OnCreateClientEv,comdat
.LLSDA14283:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE14283-.LLSDACSB14283
.LLSDACSB14283:
	.uleb128 .LEHB6-.LFB14283
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB14283
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L277-.LFB14283
	.uleb128 0
	.uleb128 .LEHB8-.LFB14283
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE14283:
	.section	.text._ZN20wxMDIParentFrameBase14OnCreateClientEv,"axG",@progbits,_ZN20wxMDIParentFrameBase14OnCreateClientEv,comdat
	.size	_ZN20wxMDIParentFrameBase14OnCreateClientEv, .-_ZN20wxMDIParentFrameBase14OnCreateClientEv
	.section	.text._ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent,"axG",@progbits,_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent,comdat
	.align 2
	.weak	_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent
	.type	_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent, @function
_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent:
.LFB14284:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK7wxEvent12GetEventTypeEv
	movl	%eax, %ebx
	leaq	wxEVT_MENU(%rip), %rdi
	call	_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv
	movl	(%rax), %eax
	cmpl	%eax, %ebx
	je	.L280
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK7wxEvent12GetEventTypeEv
	movl	%eax, %ebx
	leaq	wxEVT_UPDATE_UI(%rip), %rdi
	call	_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv
	movl	(%rax), %eax
	cmpl	%eax, %ebx
	jne	.L281
.L280:
	movl	$1, %eax
	jmp	.L282
.L281:
	movl	$0, %eax
.L282:
	testb	%al, %al
	je	.L283
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	addq	$1936, %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	je	.L283
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK7wxEvent17GetPropagatedFromEv
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L285
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK12wxWindowBase12IsDescendantEPS_@PLT
	xorl	$1, %eax
	testb	%al, %al
	je	.L286
.L285:
	movl	$1, %eax
	jmp	.L287
.L286:
	movl	$0, %eax
.L287:
	testb	%al, %al
	je	.L283
	movq	-32(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN12wxWindowBase25ProcessWindowEventLocallyER7wxEvent
	testb	%al, %al
	je	.L283
	movl	$1, %eax
	jmp	.L289
.L283:
	movq	-40(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN12wxWindowBase9TryBeforeER7wxEvent@PLT
.L289:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14284:
	.size	_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent, .-_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent
	.text
	.globl	main
	.type	main, @function
main:
.LFB14285:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	leaq	-4(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z7wxEntryRiPPc@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14285:
	.size	main, .-main
	.globl	_Z8wxGetAppv
	.type	_Z8wxGetAppv, @function
_Z8wxGetAppv:
.LFB14286:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	_ZN16wxAppConsoleBase11GetInstanceEv
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14286:
	.size	_Z8wxGetAppv, .-_Z8wxGetAppv
	.section	.text._ZN5asAppC2Ev,"axG",@progbits,_ZN5asAppC5Ev,comdat
	.align 2
	.weak	_ZN5asAppC2Ev
	.type	_ZN5asAppC2Ev, @function
_ZN5asAppC2Ev:
.LFB14289:
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
	call	_ZN5wxAppC2Ev@PLT
	leaq	16+_ZTV5asApp(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leaq	552+_ZTV5asApp(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 88(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14289:
	.size	_ZN5asAppC2Ev, .-_ZN5asAppC2Ev
	.weak	_ZN5asAppC1Ev
	.set	_ZN5asAppC1Ev,_ZN5asAppC2Ev
	.section	.rodata
.LC1:
	.string	"your program"
	.align 8
.LC2:
	.string	"3.0 (wchar_t,compiler with C++ ABI 1011,wx containers,compatible with 2.8)"
	.text
	.globl	_Z11wxCreateAppv
	.type	_Z11wxCreateAppv, @function
_Z11wxCreateAppv:
.LFB14287:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA14287
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	leaq	.LC1(%rip), %rsi
	leaq	.LC2(%rip), %rdi
.LEHB9:
	call	_ZN16wxAppConsoleBase17CheckBuildOptionsEPKcS1_@PLT
	movl	$680, %edi
	call	_Znwm@PLT
.LEHE9:
	movq	%rax, %rbx
	movq	%rbx, %rdi
.LEHB10:
	call	_ZN5asAppC1Ev
.LEHE10:
	movq	%rbx, %rax
	jmp	.L299
.L298:
	movq	%rax, %r12
	movl	$680, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
.LEHB11:
	call	_Unwind_Resume@PLT
.LEHE11:
.L299:
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14287:
	.section	.gcc_except_table,"a",@progbits
.LLSDA14287:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE14287-.LLSDACSB14287
.LLSDACSB14287:
	.uleb128 .LEHB9-.LFB14287
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB10-.LFB14287
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L298-.LFB14287
	.uleb128 0
	.uleb128 .LEHB11-.LFB14287
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
.LLSDACSE14287:
	.text
	.size	_Z11wxCreateAppv, .-_Z11wxCreateAppv
	.globl	wxTheAppInitializer
	.bss
	.type	wxTheAppInitializer, @object
	.size	wxTheAppInitializer, 1
wxTheAppInitializer:
	.zero	1
	.section	.rodata
	.align 8
.LC3:
	.string	"wxWidgets Application Template"
	.text
	.align 2
	.globl	_ZN5asApp6OnInitEv
	.type	_ZN5asApp6OnInitEv, @function
_ZN5asApp6OnInitEv:
.LFB14291:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA14291
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$144, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -152(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxStringC1Ev
	leaq	-128(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
.LEHB12:
	call	_ZN8wxStringC1EPKc
.LEHE12:
	leaq	-80(%rbp), %rdx
	leaq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB13:
	call	_Z16wxGetTranslationRK8wxStringS1_
	movq	%rax, %r12
	movl	$1000, %edi
	call	_Znwm@PLT
.LEHE13:
	movq	%rax, %rbx
	movq	%r12, %rdx
	movl	$0, %esi
	movq	%rbx, %rdi
.LEHB14:
	call	_ZN7asFrameC1EP7wxFrameRK8wxString@PLT
.LEHE14:
	movq	%rbx, -136(%rbp)
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxStringD1Ev
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxStringD1Ev
	movq	-136(%rbp), %rdx
	movq	-136(%rbp), %rax
	movq	(%rax), %rax
	addq	$448, %rax
	movq	(%rax), %rax
	movl	$1, %esi
	movq	%rdx, %rdi
.LEHB15:
	call	*%rax
	movl	$1, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L305
	jmp	.L309
.L308:
	movq	%rax, %r12
	movl	$1000, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rbx
	jmp	.L303
.L307:
	movq	%rax, %rbx
.L303:
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxStringD1Ev
	jmp	.L304
.L306:
	movq	%rax, %rbx
.L304:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxStringD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE15:
.L309:
	call	__stack_chk_fail@PLT
.L305:
	addq	$144, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14291:
	.section	.gcc_except_table
.LLSDA14291:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE14291-.LLSDACSB14291
.LLSDACSB14291:
	.uleb128 .LEHB12-.LFB14291
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L306-.LFB14291
	.uleb128 0
	.uleb128 .LEHB13-.LFB14291
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L307-.LFB14291
	.uleb128 0
	.uleb128 .LEHB14-.LFB14291
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L308-.LFB14291
	.uleb128 0
	.uleb128 .LEHB15-.LFB14291
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
.LLSDACSE14291:
	.text
	.size	_ZN5asApp6OnInitEv, .-_ZN5asApp6OnInitEv
	.section	.text._ZN22wxScopedCharTypeBufferIwED2Ev,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwED5Ev,comdat
	.align 2
	.weak	_ZN22wxScopedCharTypeBufferIwED2Ev
	.type	_ZN22wxScopedCharTypeBufferIwED2Ev, @function
_ZN22wxScopedCharTypeBufferIwED2Ev:
.LFB14311:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA14311
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN22wxScopedCharTypeBufferIwE6DecRefEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14311:
	.section	.gcc_except_table
.LLSDA14311:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE14311-.LLSDACSB14311
.LLSDACSB14311:
.LLSDACSE14311:
	.section	.text._ZN22wxScopedCharTypeBufferIwED2Ev,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwED5Ev,comdat
	.size	_ZN22wxScopedCharTypeBufferIwED2Ev, .-_ZN22wxScopedCharTypeBufferIwED2Ev
	.weak	_ZN22wxScopedCharTypeBufferIwED1Ev
	.set	_ZN22wxScopedCharTypeBufferIwED1Ev,_ZN22wxScopedCharTypeBufferIwED2Ev
	.section	.text._ZN22wxScopedCharTypeBufferIwEC2ERKS0_,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwEC5ERKS0_,comdat
	.align 2
	.weak	_ZN22wxScopedCharTypeBufferIwEC2ERKS0_
	.type	_ZN22wxScopedCharTypeBufferIwEC2ERKS0_, @function
_ZN22wxScopedCharTypeBufferIwEC2ERKS0_:
.LFB14565:
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
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN22wxScopedCharTypeBufferIwE6IncRefEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14565:
	.size	_ZN22wxScopedCharTypeBufferIwEC2ERKS0_, .-_ZN22wxScopedCharTypeBufferIwEC2ERKS0_
	.weak	_ZN22wxScopedCharTypeBufferIwEC1ERKS0_
	.set	_ZN22wxScopedCharTypeBufferIwEC1ERKS0_,_ZN22wxScopedCharTypeBufferIwEC2ERKS0_
	.section	.text._ZN8wxString15ConvertedBufferIcED2Ev,"axG",@progbits,_ZN8wxString15ConvertedBufferIcED5Ev,comdat
	.align 2
	.weak	_ZN8wxString15ConvertedBufferIcED2Ev
	.type	_ZN8wxString15ConvertedBufferIcED2Ev, @function
_ZN8wxString15ConvertedBufferIcED2Ev:
.LFB14634:
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
	movq	%rax, %rdi
	call	free@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14634:
	.size	_ZN8wxString15ConvertedBufferIcED2Ev, .-_ZN8wxString15ConvertedBufferIcED2Ev
	.weak	_ZN8wxString15ConvertedBufferIcED1Ev
	.set	_ZN8wxString15ConvertedBufferIcED1Ev,_ZN8wxString15ConvertedBufferIcED2Ev
	.section	.text._ZN8wxString15ConvertedBufferIcEC2Ev,"axG",@progbits,_ZN8wxString15ConvertedBufferIcEC5Ev,comdat
	.align 2
	.weak	_ZN8wxString15ConvertedBufferIcEC2Ev
	.type	_ZN8wxString15ConvertedBufferIcEC2Ev, @function
_ZN8wxString15ConvertedBufferIcEC2Ev:
.LFB14640:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14640:
	.size	_ZN8wxString15ConvertedBufferIcEC2Ev, .-_ZN8wxString15ConvertedBufferIcEC2Ev
	.weak	_ZN8wxString15ConvertedBufferIcEC1Ev
	.set	_ZN8wxString15ConvertedBufferIcEC1Ev,_ZN8wxString15ConvertedBufferIcEC2Ev
	.section	.text._ZNK22wxScopedCharTypeBufferIwEcvPKwEv,"axG",@progbits,_ZNK22wxScopedCharTypeBufferIwEcvPKwEv,comdat
	.align 2
	.weak	_ZNK22wxScopedCharTypeBufferIwEcvPKwEv
	.type	_ZNK22wxScopedCharTypeBufferIwEcvPKwEv, @function
_ZNK22wxScopedCharTypeBufferIwEcvPKwEv:
.LFB14645:
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
	call	_ZNK22wxScopedCharTypeBufferIwE4dataEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14645:
	.size	_ZNK22wxScopedCharTypeBufferIwEcvPKwEv, .-_ZNK22wxScopedCharTypeBufferIwEcvPKwEv
	.section	.text._ZNK22wxScopedCharTypeBufferIwE4dataEv,"axG",@progbits,_ZNK22wxScopedCharTypeBufferIwE4dataEv,comdat
	.align 2
	.weak	_ZNK22wxScopedCharTypeBufferIwE4dataEv
	.type	_ZNK22wxScopedCharTypeBufferIwE4dataEv, @function
_ZNK22wxScopedCharTypeBufferIwE4dataEv:
.LFB14652:
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
	movq	%rax, %rdi
	call	_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14652:
	.size	_ZNK22wxScopedCharTypeBufferIwE4dataEv, .-_ZNK22wxScopedCharTypeBufferIwE4dataEv
	.section	.text._ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv,"axG",@progbits,_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv,comdat
	.align 2
	.weak	_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv
	.type	_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv, @function
_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv:
.LFB14921:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14921:
	.size	_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv, .-_ZNK14wxEventTypeTagI15wxUpdateUIEventEcvRKiEv
	.section	.text._Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_,"axG",@progbits,_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_,comdat
	.weak	_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_
	.type	_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_, @function
_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_:
.LFB14936:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L321
	movl	-4(%rbp), %eax
	jmp	.L323
.L321:
	movl	-8(%rbp), %eax
.L323:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14936:
	.size	_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_, .-_Z5wxMaxIiiEN24wxImplicitConversionTypeIT_T0_E5valueES1_S2_
	.section	.text._ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv,"axG",@progbits,_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv,comdat
	.align 2
	.weak	_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv
	.type	_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv, @function
_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv:
.LFB14983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14983:
	.size	_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv, .-_ZNK14wxEventTypeTagI14wxCommandEventEcvRKiEv
	.section	.text._ZN22wxScopedCharTypeBufferIwE4DataD2Ev,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwE4DataD5Ev,comdat
	.align 2
	.weak	_ZN22wxScopedCharTypeBufferIwE4DataD2Ev
	.type	_ZN22wxScopedCharTypeBufferIwE4DataD2Ev, @function
_ZN22wxScopedCharTypeBufferIwE4DataD2Ev:
.LFB14996:
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
	call	_ZN9wxPrivate17UntypedBufferDataD2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14996:
	.size	_ZN22wxScopedCharTypeBufferIwE4DataD2Ev, .-_ZN22wxScopedCharTypeBufferIwE4DataD2Ev
	.weak	_ZN22wxScopedCharTypeBufferIwE4DataD1Ev
	.set	_ZN22wxScopedCharTypeBufferIwE4DataD1Ev,_ZN22wxScopedCharTypeBufferIwE4DataD2Ev
	.section	.text._ZN22wxScopedCharTypeBufferIwE6DecRefEv,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwE6DecRefEv,comdat
	.align 2
	.weak	_ZN22wxScopedCharTypeBufferIwE6DecRefEv
	.type	_ZN22wxScopedCharTypeBufferIwE6DecRefEv, @function
_ZN22wxScopedCharTypeBufferIwE6DecRefEv:
.LFB14994:
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
	movq	-24(%rbp), %rax
	movq	(%rax), %rbx
	call	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv
	cmpq	%rax, %rbx
	sete	%al
	testb	%al, %al
	jne	.L331
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movzwl	16(%rax), %edx
	subl	$1, %edx
	movw	%dx, 16(%rax)
	movzwl	16(%rax), %eax
	testw	%ax, %ax
	sete	%al
	testb	%al, %al
	je	.L330
	movq	-24(%rbp), %rax
	movq	(%rax), %rbx
	testq	%rbx, %rbx
	je	.L330
	movq	%rbx, %rdi
	call	_ZN22wxScopedCharTypeBufferIwE4DataD1Ev
	movl	$24, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
.L330:
	call	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	jmp	.L327
.L331:
	nop
.L327:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14994:
	.size	_ZN22wxScopedCharTypeBufferIwE6DecRefEv, .-_ZN22wxScopedCharTypeBufferIwE6DecRefEv
	.section	.text._ZN22wxScopedCharTypeBufferIwE11GetNullDataEv,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv,comdat
	.weak	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv
	.type	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv, @function
_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv:
.LFB15003:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	_ZN9wxPrivate18GetUntypedNullDataEv@PLT
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15003:
	.size	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv, .-_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv
	.section	.text._ZN22wxScopedCharTypeBufferIwE6IncRefEv,"axG",@progbits,_ZN22wxScopedCharTypeBufferIwE6IncRefEv,comdat
	.align 2
	.weak	_ZN22wxScopedCharTypeBufferIwE6IncRefEv
	.type	_ZN22wxScopedCharTypeBufferIwE6IncRefEv, @function
_ZN22wxScopedCharTypeBufferIwE6IncRefEv:
.LFB15103:
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
	movq	-24(%rbp), %rax
	movq	(%rax), %rbx
	call	_ZN22wxScopedCharTypeBufferIwE11GetNullDataEv
	cmpq	%rax, %rbx
	sete	%al
	testb	%al, %al
	jne	.L337
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movzwl	16(%rax), %edx
	addl	$1, %edx
	movw	%dx, 16(%rax)
	jmp	.L334
.L337:
	nop
.L334:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15103:
	.size	_ZN22wxScopedCharTypeBufferIwE6IncRefEv, .-_ZN22wxScopedCharTypeBufferIwE6IncRefEv
	.section	.text._ZNK22wxScopedCharTypeBufferIwE4Data3GetEv,"axG",@progbits,_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv,comdat
	.align 2
	.weak	_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv
	.type	_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv, @function
_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv:
.LFB15121:
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
.LFE15121:
	.size	_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv, .-_ZNK22wxScopedCharTypeBufferIwE4Data3GetEv
	.weak	_ZTV5asApp
	.section	.data.rel.ro._ZTV5asApp,"awG",@progbits,_ZTV5asApp,comdat
	.align 8
	.type	_ZTV5asApp, @object
	.size	_ZTV5asApp, 576
_ZTV5asApp:
	.quad	0
	.quad	_ZTI5asApp
	.quad	_ZNK5wxApp12GetClassInfoEv
	.quad	_ZN5asAppD1Ev
	.quad	_ZN5asAppD0Ev
	.quad	_ZNK8wxObject13CreateRefDataEv
	.quad	_ZNK8wxObject12CloneRefDataEPK12wxRefCounter
	.quad	_ZN12wxEvtHandler14SetNextHandlerEPS_
	.quad	_ZN12wxEvtHandler18SetPreviousHandlerEPS_
	.quad	_ZN12wxEvtHandler12ProcessEventER7wxEvent
	.quad	_ZN12wxEvtHandler10QueueEventEP7wxEvent
	.quad	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent
	.quad	_ZN12wxEvtHandler16SearchEventTableER12wxEventTableR7wxEvent
	.quad	_ZN12wxEvtHandler9TryBeforeER7wxEvent
	.quad	_ZN12wxEvtHandler8TryAfterER7wxEvent
	.quad	_ZN12wxEvtHandler12TryValidatorER7wxEvent
	.quad	_ZN12wxEvtHandler9TryParentER7wxEvent
	.quad	_ZNK12wxEvtHandler13GetEventTableEv
	.quad	_ZNK12wxEvtHandler17GetEventHashTableEv
	.quad	_ZN12wxEvtHandler17DoSetClientObjectEP12wxClientData
	.quad	_ZNK12wxEvtHandler17DoGetClientObjectEv
	.quad	_ZN12wxEvtHandler15DoSetClientDataEPv
	.quad	_ZNK12wxEvtHandler15DoGetClientDataEv
	.quad	_ZN5wxApp10InitializeERiPPw
	.quad	_ZN16wxAppConsoleBase10CallOnInitEv
	.quad	_ZN5asApp6OnInitEv
	.quad	_ZN9wxAppBase5OnRunEv
	.quad	_ZN16wxAppConsoleBase10OnLaunchedEv
	.quad	_ZN16wxAppConsoleBase16OnEventLoopEnterEP15wxEventLoopBase
	.quad	_ZN9wxAppBase6OnExitEv
	.quad	_ZN16wxAppConsoleBase15OnEventLoopExitEP15wxEventLoopBase
	.quad	_ZN5wxApp7CleanUpEv
	.quad	_ZN16wxAppConsoleBase16OnFatalExceptionEv
	.quad	_ZN16wxAppConsoleBase4ExitEv
	.quad	_ZN9wxAppBase13OnInitCmdLineER15wxCmdLineParser
	.quad	_ZN9wxAppBase15OnCmdLineParsedER15wxCmdLineParser
	.quad	_ZN16wxAppConsoleBase13OnCmdLineHelpER15wxCmdLineParser
	.quad	_ZN16wxAppConsoleBase14OnCmdLineErrorER15wxCmdLineParser
	.quad	_ZN16wxAppConsoleBase10SetCLocaleEv
	.quad	_ZN16wxAppConsoleBase11FilterEventER7wxEvent
	.quad	_ZNK16wxAppConsoleBase16CallEventHandlerEP12wxEvtHandlerR14wxEventFunctorR7wxEvent
	.quad	_ZNK16wxAppConsoleBase11HandleEventEP12wxEvtHandlerMS0_FvR7wxEventES3_
	.quad	_ZN16wxAppConsoleBase20OnUnhandledExceptionEv
	.quad	_ZN16wxAppConsoleBase21OnExceptionInMainLoopEv
	.quad	_ZN16wxAppConsoleBase20ProcessPendingEventsEv
	.quad	_ZN16wxAppConsoleBase7PendingEv
	.quad	_ZN16wxAppConsoleBase8DispatchEv
	.quad	_ZN16wxAppConsoleBase8MainLoopEv
	.quad	_ZN16wxAppConsoleBase12ExitMainLoopEv
	.quad	_ZN5wxApp10WakeUpIdleEv
	.quad	_ZN9wxAppBase11ProcessIdleEv
	.quad	_ZNK9wxAppBase13UsesEventLoopEv
	.quad	_ZN5wxApp15OnAssertFailureEPKwiS1_S1_S1_
	.quad	_ZN16wxAppConsoleBase8OnAssertEPKwiS1_S1_
	.quad	_ZN9wxAppBase12CreateTraitsEv
	.quad	_ZN5wxApp9OnInitGuiEv
	.quad	_ZN9wxAppBase9SafeYieldEP8wxWindowb
	.quad	_ZN9wxAppBase12SafeYieldForEP8wxWindowl
	.quad	_ZNK9wxAppBase8IsActiveEv
	.quad	_ZNK9wxAppBase12GetTopWindowEv
	.quad	_ZNK9wxAppBase14GetDisplayModeEv
	.quad	_ZN9wxAppBase14SetDisplayModeERK11wxVideoMode
	.quad	_ZN9wxAppBase12SetPrintModeEi
	.quad	_ZNK9wxAppBase18GetLayoutDirectionEv
	.quad	_ZN5wxApp14SetNativeThemeERK8wxString
	.quad	_ZN9wxAppBase9SetActiveEbP8wxWindow
	.quad	_ZN5wxApp14GetXVisualInfoEv
	.quad	-88
	.quad	_ZTI5asApp
	.quad	_ZThn88_N5asAppD1Ev
	.quad	_ZThn88_N5asAppD0Ev
	.quad	_ZThn88_N16wxAppConsoleBase11FilterEventER7wxEvent
	.section	.text._ZN5asAppD2Ev,"axG",@progbits,_ZN5asAppD5Ev,comdat
	.align 2
	.weak	_ZN5asAppD2Ev
	.type	_ZN5asAppD2Ev, @function
_ZN5asAppD2Ev:
.LFB15376:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV5asApp(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leaq	552+_ZTV5asApp(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 88(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5wxAppD2Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15376:
	.size	_ZN5asAppD2Ev, .-_ZN5asAppD2Ev
	.weak	_ZN5asAppD1Ev
	.set	_ZN5asAppD1Ev,_ZN5asAppD2Ev
	.set	.LTHUNK41,_ZN5asAppD1Ev
	.weak	_ZThn88_N5asAppD1Ev
	.type	_ZThn88_N5asAppD1Ev, @function
_ZThn88_N5asAppD1Ev:
.LFB15554:
	.cfi_startproc
	subq	$88, %rdi
	jmp	.LTHUNK41
	.cfi_endproc
.LFE15554:
	.size	_ZThn88_N5asAppD1Ev, .-_ZThn88_N5asAppD1Ev
	.section	.text._ZN5asAppD0Ev,"axG",@progbits,_ZN5asAppD5Ev,comdat
	.align 2
	.weak	_ZN5asAppD0Ev
	.type	_ZN5asAppD0Ev, @function
_ZN5asAppD0Ev:
.LFB15378:
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
	call	_ZN5asAppD1Ev
	movq	-8(%rbp), %rax
	movl	$680, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15378:
	.size	_ZN5asAppD0Ev, .-_ZN5asAppD0Ev
	.set	.LTHUNK42,_ZN5asAppD0Ev
	.weak	_ZThn88_N5asAppD0Ev
	.type	_ZThn88_N5asAppD0Ev, @function
_ZThn88_N5asAppD0Ev:
.LFB15555:
	.cfi_startproc
	subq	$88, %rdi
	jmp	.LTHUNK42
	.cfi_endproc
.LFE15555:
	.size	_ZThn88_N5asAppD0Ev, .-_ZThn88_N5asAppD0Ev
	.weak	_ZTV20wxMDIParentFrameBase
	.section	.data.rel.ro._ZTV20wxMDIParentFrameBase,"awG",@progbits,_ZTV20wxMDIParentFrameBase,comdat
	.align 8
	.type	_ZTV20wxMDIParentFrameBase, @object
	.size	_ZTV20wxMDIParentFrameBase, 2024
_ZTV20wxMDIParentFrameBase:
	.quad	0
	.quad	_ZTI20wxMDIParentFrameBase
	.quad	_ZNK7wxFrame12GetClassInfoEv
	.quad	0
	.quad	0
	.quad	_ZNK8wxObject13CreateRefDataEv
	.quad	_ZNK8wxObject12CloneRefDataEPK12wxRefCounter
	.quad	_ZN12wxWindowBase14SetNextHandlerEP12wxEvtHandler
	.quad	_ZN12wxWindowBase18SetPreviousHandlerEP12wxEvtHandler
	.quad	_ZN12wxEvtHandler12ProcessEventER7wxEvent
	.quad	_ZN12wxEvtHandler10QueueEventEP7wxEvent
	.quad	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent
	.quad	_ZN12wxEvtHandler16SearchEventTableER12wxEventTableR7wxEvent
	.quad	_ZN20wxMDIParentFrameBase9TryBeforeER7wxEvent
	.quad	_ZN12wxWindowBase8TryAfterER7wxEvent
	.quad	_ZN12wxEvtHandler12TryValidatorER7wxEvent
	.quad	_ZN12wxEvtHandler9TryParentER7wxEvent
	.quad	_ZNK11wxFrameBase13GetEventTableEv
	.quad	_ZNK11wxFrameBase17GetEventHashTableEv
	.quad	_ZN12wxEvtHandler17DoSetClientObjectEP12wxClientData
	.quad	_ZNK12wxEvtHandler17DoGetClientObjectEv
	.quad	_ZN12wxEvtHandler15DoSetClientDataEPv
	.quad	_ZNK12wxEvtHandler15DoGetClientDataEv
	.quad	_ZN20wxTopLevelWindowBase7DestroyEv
	.quad	_ZN19wxTopLevelWindowGTK8SetLabelERK8wxString
	.quad	_ZNK19wxTopLevelWindowGTK8GetLabelEv
	.quad	_ZN12wxWindowBase7SetNameERK8wxString
	.quad	_ZNK12wxWindowBase7GetNameEv
	.quad	_ZNK8wxWindow18GetLayoutDirectionEv
	.quad	_ZN8wxWindow18SetLayoutDirectionE17wxLayoutDirection
	.quad	_ZNK8wxWindow24AdjustForLayoutDirectionEiii
	.quad	_ZN19wxTopLevelWindowGTK5RaiseEv
	.quad	_ZN8wxWindow5LowerEv
	.quad	_ZNK7wxFrame19GetClientAreaOriginEv
	.quad	_ZNK12wxWindowBase18ClientToWindowSizeERK6wxSize
	.quad	_ZNK12wxWindowBase18WindowToClientSizeERK6wxSize
	.quad	_ZNK12wxWindowBase19GetEffectiveMinSizeEv
	.quad	_ZN12wxWindowBase3FitEv
	.quad	_ZN12wxWindowBase9FitInsideEv
	.quad	_ZN12wxWindowBase12SetSizeHintsEiiiiii
	.quad	_ZN12wxWindowBase19SetVirtualSizeHintsEiiii
	.quad	_ZN20wxTopLevelWindowBase10SetMinSizeERK6wxSize
	.quad	_ZN20wxTopLevelWindowBase10SetMaxSizeERK6wxSize
	.quad	_ZN12wxWindowBase16SetMinClientSizeERK6wxSize
	.quad	_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize
	.quad	_ZNK12wxWindowBase10GetMinSizeEv
	.quad	_ZNK12wxWindowBase10GetMaxSizeEv
	.quad	_ZNK12wxWindowBase16GetMinClientSizeEv
	.quad	_ZNK12wxWindowBase16GetMaxClientSizeEv
	.quad	_ZN12wxWindowBase16DoSetVirtualSizeEii
	.quad	_ZNK12wxWindowBase16DoGetVirtualSizeEv
	.quad	_ZNK12wxWindowBase18GetBestVirtualSizeEv
	.quad	_ZNK12wxWindowBase21GetContentScaleFactorEv
	.quad	_ZNK12wxWindowBase19GetWindowBorderSizeEv
	.quad	_ZN12wxWindowBase20InformFirstDirectionEiii
	.quad	_ZN12wxWindowBase13SendSizeEventEi
	.quad	_ZN12wxWindowBase26BeginRepositioningChildrenEv
	.quad	_ZN12wxWindowBase24EndRepositioningChildrenEv
	.quad	_ZN19wxTopLevelWindowGTK4ShowEb
	.quad	_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj
	.quad	_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj
	.quad	_ZN12wxWindowBase6EnableEb
	.quad	_ZNK8wxWindow7IsShownEv
	.quad	_ZNK12wxWindowBase15IsShownOnScreenEv
	.quad	_ZN19wxTopLevelWindowGTK18SetWindowStyleFlagEl
	.quad	_ZNK12wxWindowBase18GetWindowStyleFlagEv
	.quad	_ZNK8wxWindow10IsRetainedEv
	.quad	_ZN12wxWindowBase13SetExtraStyleEl
	.quad	_ZN12wxWindowBase9MakeModalEb
	.quad	_ZN12wxWindowBase15SetThemeEnabledEb
	.quad	_ZNK12wxWindowBase15GetThemeEnabledEv
	.quad	_ZN8wxWindow8SetFocusEv
	.quad	_ZN12wxWindowBase15SetFocusFromKbdEv
	.quad	_ZNK12wxWindowBase8HasFocusEv
	.quad	_ZNK12wxWindowBase12AcceptsFocusEv
	.quad	_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv
	.quad	_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv
	.quad	_ZNK12wxWindowBase12CanBeFocusedEv
	.quad	_ZN8wxWindow11SetCanFocusEb
	.quad	_ZNK20wxTopLevelWindowBase10IsTopLevelEv
	.quad	_ZN8wxWindow8ReparentEP12wxWindowBase
	.quad	_ZN8wxWindow8AddChildEP12wxWindowBase
	.quad	_ZN8wxWindow11RemoveChildEP12wxWindowBase
	.quad	_ZNK11wxFrameBase17IsClientAreaChildEPK8wxWindow
	.quad	_ZN12wxWindowBase12SetValidatorERK11wxValidator
	.quad	_ZN12wxWindowBase12GetValidatorEv
	.quad	_ZN12wxWindowBase8ValidateEv
	.quad	_ZN12wxWindowBase20TransferDataToWindowEv
	.quad	_ZN12wxWindowBase22TransferDataFromWindowEv
	.quad	_ZN12wxWindowBase10InitDialogEv
	.quad	_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable
	.quad	_ZN8wxWindow11WarpPointerEii
	.quad	_ZNK12wxWindowBase10HasCaptureEv
	.quad	_ZN19wxTopLevelWindowGTK7RefreshEbPK6wxRect
	.quad	_ZN8wxWindow6UpdateEv
	.quad	_ZN8wxWindow15ClearBackgroundEv
	.quad	_ZN12wxWindowBase9PrepareDCER4wxDC
	.quad	_ZNK8wxWindow16IsDoubleBufferedEv
	.quad	_ZNK8wxWindow11DoIsExposedEii
	.quad	_ZNK8wxWindow11DoIsExposedEiiii
	.quad	_ZNK12wxWindowBase20GetDefaultAttributesEv
	.quad	_ZN8wxWindow19SetBackgroundColourERK8wxColour
	.quad	_ZN8wxWindow19SetForegroundColourERK8wxColour
	.quad	_ZN8wxWindow18SetBackgroundStyleE17wxBackgroundStyle
	.quad	_ZN12wxWindowBase24HasTransparentBackgroundEv
	.quad	_ZNK8wxWindow32IsTransparentBackgroundSupportedEP8wxString
	.quad	_ZN8wxWindow7SetFontERK6wxFont
	.quad	_ZN8wxWindow9SetCursorERK8wxCursor
	.quad	_ZNK8wxWindow13GetCharHeightEv
	.quad	_ZNK8wxWindow12GetCharWidthEv
	.quad	_ZN11wxFrameBase14UpdateWindowUIEl
	.quad	_ZN20wxTopLevelWindowBase16DoUpdateWindowUIER15wxUpdateUIEvent
	.quad	_ZNK12wxWindowBase16HasMultiplePagesEv
	.quad	_ZNK12wxWindowBase9CanScrollEi
	.quad	_ZN8wxWindow12SetScrollbarEiiiib
	.quad	_ZN8wxWindow12SetScrollPosEiib
	.quad	_ZNK8wxWindow12GetScrollPosEi
	.quad	_ZNK8wxWindow14GetScrollThumbEi
	.quad	_ZNK8wxWindow14GetScrollRangeEi
	.quad	_ZN8wxWindow12ScrollWindowEiiPK6wxRect
	.quad	_ZN8wxWindow11ScrollLinesEi
	.quad	_ZN8wxWindow11ScrollPagesEi
	.quad	_ZN12wxWindowBase20AlwaysShowScrollbarsEbb
	.quad	_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi
	.quad	_ZNK12wxWindowBase18GetHelpTextAtPointERK7wxPointN11wxHelpEvent6OriginE
	.quad	_ZN8wxWindow13SetDropTargetEP12wxDropTarget
	.quad	_ZNK12wxWindowBase13GetDropTargetEv
	.quad	_ZN12wxWindowBase15DragAcceptFilesEb
	.quad	_ZN12wxWindowBase18SetConstraintSizesEb
	.quad	_ZN12wxWindowBase12LayoutPhase1EPi
	.quad	_ZN12wxWindowBase12LayoutPhase2EPi
	.quad	_ZN12wxWindowBase7DoPhaseEi
	.quad	_ZN12wxWindowBase17SetSizeConstraintEiiii
	.quad	_ZN12wxWindowBase14MoveConstraintEii
	.quad	_ZNK12wxWindowBase17GetSizeConstraintEPiS0_
	.quad	_ZNK12wxWindowBase23GetClientSizeConstraintEPiS0_
	.quad	_ZNK12wxWindowBase21GetPositionConstraintEPiS0_
	.quad	_ZN12wxWindowBase6LayoutEv
	.quad	_ZN19wxTopLevelWindowGTK14SetTransparentEh
	.quad	_ZN19wxTopLevelWindowGTK17CanSetTransparentEv
	.quad	_ZN11wxFrameBase14OnInternalIdleEv
	.quad	_ZN7wxFrame14SendIdleEventsER11wxIdleEvent
	.quad	_ZNK8wxWindow9GetHandleEv
	.quad	_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget
	.quad	_ZN12wxWindowBase16DissociateHandleEv
	.quad	_ZN20wxNonOwnedWindowBase17InheritAttributesEv
	.quad	_ZNK12wxWindowBase20ShouldInheritColoursEv
	.quad	_ZNK12wxWindowBase22CanBeOutsideClientAreaEv
	.quad	_ZNK12wxWindowBase19CanApplyThemeBorderEv
	.quad	_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv
	.quad	_ZNK20wxTopLevelWindowBase21IsTopNavigationDomainEv
	.quad	_ZN8wxWindow16DoMoveInTabOrderEPS_N12wxWindowBase11WindowOrderE
	.quad	_ZN8wxWindow12DoNavigateInEi
	.quad	_ZN8wxWindow8DoEnableEb
	.quad	_ZNK12wxWindowBase16GetDefaultBorderEv
	.quad	_ZNK12wxWindowBase26GetDefaultBorderForControlEv
	.quad	_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize
	.quad	_ZNK8wxWindow15DoGetTextExtentERK8wxStringPiS3_S3_S3_PK6wxFont
	.quad	_ZNK20wxTopLevelWindowBase16DoClientToScreenEPiS0_
	.quad	_ZNK20wxTopLevelWindowBase16DoScreenToClientEPiS0_
	.quad	_ZNK12wxWindowBase9DoHitTestEii
	.quad	_ZN8wxWindow14DoCaptureMouseEv
	.quad	_ZN8wxWindow14DoReleaseMouseEv
	.quad	_ZNK8wxWindow13DoGetPositionEPiS0_
	.quad	_ZNK20wxTopLevelWindowBase19DoGetScreenPositionEPiS0_
	.quad	_ZNK8wxWindow9DoGetSizeEPiS0_
	.quad	_ZNK7wxFrame15DoGetClientSizeEPiS0_
	.quad	_ZNK12wxWindowBase13DoGetBestSizeEv
	.quad	_ZNK12wxWindowBase19DoGetBestClientSizeEv
	.quad	_ZNK12wxWindowBase21DoGetBestClientHeightEi
	.quad	_ZNK12wxWindowBase20DoGetBestClientWidthEi
	.quad	_ZN19wxTopLevelWindowGTK9DoSetSizeEiiiii
	.quad	_ZN19wxTopLevelWindowGTK15DoSetClientSizeEii
	.quad	_ZN19wxTopLevelWindowGTK14DoSetSizeHintsEiiiiii
	.quad	_ZNK8wxWindow15DoGetBorderSizeEv
	.quad	_ZN19wxTopLevelWindowGTK12DoMoveWindowEiiii
	.quad	_ZN20wxTopLevelWindowBase8DoCentreEi
	.quad	_ZN8wxWindow12DoSetToolTipEP9wxToolTip
	.quad	_ZN8wxWindow11DoPopupMenuEP6wxMenuii
	.quad	_ZNK20wxNonOwnedWindowBase27AdjustForParentClientOriginERiS0_i
	.quad	_ZN12wxWindowBase18DoSetWindowVariantE15wxWindowVariant
	.quad	_ZN8wxWindow8DoFreezeEv
	.quad	_ZN8wxWindow6DoThawEv
	.quad	_ZN8wxWindow16GetConnectWidgetEv
	.quad	_ZNK8wxWindow15GTKProcessEventER7wxEvent
	.quad	_ZN19wxTopLevelWindowGTK17GTKHandleRealizedEv
	.quad	_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv
	.quad	_ZNK8wxWindow22GTKWidgetNeedsMnemonicEv
	.quad	_ZN8wxWindow22GTKWidgetDoSetMnemonicEP10_GtkWidget
	.quad	_ZNK8wxWindow12GTKGetWindowER17wxArrayGdkWindows
	.quad	_ZN8wxWindow15GTKApplyToolTipEPKc
	.quad	_ZNK8wxWindow24GTKIsTransparentForMouseEv
	.quad	_ZNK8wxWindow19GTKIMFilterKeypressEP12_GdkEventKey
	.quad	_ZN8wxWindow18DoApplyWidgetStyleEP11_GtkRcStyle
	.quad	_ZNK8wxWindow14GTKNeedsParentEv
	.quad	_ZN8wxWindow11AddChildGTKEPS_
	.quad	_ZN16wxNonOwnedWindow12DoClearShapeEv
	.quad	_ZN16wxNonOwnedWindow16DoSetRegionShapeERK8wxRegion
	.quad	_ZN16wxNonOwnedWindow14DoSetPathShapeERK14wxGraphicsPath
	.quad	_ZN19wxTopLevelWindowGTK8MaximizeEb
	.quad	_ZN19wxTopLevelWindowGTK7RestoreEv
	.quad	_ZN19wxTopLevelWindowGTK7IconizeEb
	.quad	_ZNK19wxTopLevelWindowGTK11IsMaximizedEv
	.quad	_ZNK20wxTopLevelWindowBase17IsAlwaysMaximizedEv
	.quad	_ZNK19wxTopLevelWindowGTK10IsIconizedEv
	.quad	_ZN19wxTopLevelWindowGTK8SetIconsERK12wxIconBundle
	.quad	_ZN7wxFrame14ShowFullScreenEbl
	.quad	_ZN19wxTopLevelWindowGTK21ShowWithoutActivatingEv
	.quad	_ZNK19wxTopLevelWindowGTK12IsFullScreenEv
	.quad	_ZN19wxTopLevelWindowGTK8SetTitleERK8wxString
	.quad	_ZNK19wxTopLevelWindowGTK8GetTitleEv
	.quad	_ZN19wxTopLevelWindowGTK17EnableCloseButtonEb
	.quad	_ZN19wxTopLevelWindowGTK20RequestUserAttentionEi
	.quad	_ZN19wxTopLevelWindowGTK8IsActiveEv
	.quad	_ZNK20wxTopLevelWindowBase20ShouldPreventAppExitEv
	.quad	_ZNK20wxTopLevelWindowBase9IsVisibleEv
	.quad	_ZN20wxTopLevelWindowBase26GetRectForTopLevelChildrenEPiS0_S0_S0_
	.quad	_ZN20wxTopLevelWindowBase14OSXSetModifiedEb
	.quad	_ZNK20wxTopLevelWindowBase13OSXIsModifiedEv
	.quad	_ZN20wxTopLevelWindowBase22SetRepresentedFilenameERK8wxString
	.quad	_ZN11wxFrameBase10DoGiveHelpERK8wxStringb
	.quad	_ZNK11wxFrameBase11IsOneOfBarsEPK8wxWindow
	.quad	_ZN19wxTopLevelWindowGTK7AddGrabEv
	.quad	_ZN19wxTopLevelWindowGTK10RemoveGrabEv
	.quad	_ZNK19wxTopLevelWindowGTK9IsGrabbedEv
	.quad	_ZN11wxFrameBase10SetMenuBarEP9wxMenuBar
	.quad	_ZNK11wxFrameBase10GetMenuBarEv
	.quad	_ZNK11wxFrameBase17FindItemInMenuBarEi
	.quad	_ZN11wxFrameBase15CreateStatusBarEiliRK8wxString
	.quad	_ZN11wxFrameBase17OnCreateStatusBarEiliRK8wxString
	.quad	_ZNK11wxFrameBase12GetStatusBarEv
	.quad	_ZN7wxFrame12SetStatusBarEP11wxStatusBar
	.quad	_ZN11wxFrameBase13SetStatusTextERK8wxStringi
	.quad	_ZN11wxFrameBase15SetStatusWidthsEiPKi
	.quad	_ZN11wxFrameBase13CreateToolBarEliRK8wxString
	.quad	_ZN11wxFrameBase15OnCreateToolBarEliRK8wxString
	.quad	_ZNK11wxFrameBase10GetToolBarEv
	.quad	_ZN7wxFrame10SetToolBarEP9wxToolBar
	.quad	_ZN11wxFrameBase13DoMenuUpdatesEP6wxMenu
	.quad	_ZN11wxFrameBase15PositionMenuBarEv
	.quad	_ZN7wxFrame13DetachMenuBarEv
	.quad	_ZN7wxFrame13AttachMenuBarEP9wxMenuBar
	.quad	_ZN11wxFrameBase17PositionStatusBarEv
	.quad	_ZN11wxFrameBase15PositionToolBarEv
	.quad	_ZNK20wxMDIParentFrameBase14GetActiveChildEv
	.quad	_ZN20wxMDIParentFrameBase14SetActiveChildEP15wxMDIChildFrame
	.quad	_ZN20wxMDIParentFrameBase13SetWindowMenuEP6wxMenu
	.quad	_ZN20wxMDIParentFrameBase7CascadeEv
	.quad	_ZN20wxMDIParentFrameBase4TileE13wxOrientation
	.quad	_ZN20wxMDIParentFrameBase12ArrangeIconsEv
	.quad	__cxa_pure_virtual
	.quad	__cxa_pure_virtual
	.quad	_ZN20wxMDIParentFrameBase14OnCreateClientEv
	.weak	_ZTV21wxMDIClientWindowBase
	.section	.data.rel.ro._ZTV21wxMDIClientWindowBase,"awG",@progbits,_ZTV21wxMDIClientWindowBase,comdat
	.align 8
	.type	_ZTV21wxMDIClientWindowBase, @object
	.size	_ZTV21wxMDIClientWindowBase, 1576
_ZTV21wxMDIClientWindowBase:
	.quad	0
	.quad	_ZTI21wxMDIClientWindowBase
	.quad	_ZNK8wxWindow12GetClassInfoEv
	.quad	0
	.quad	0
	.quad	_ZNK8wxObject13CreateRefDataEv
	.quad	_ZNK8wxObject12CloneRefDataEPK12wxRefCounter
	.quad	_ZN12wxWindowBase14SetNextHandlerEP12wxEvtHandler
	.quad	_ZN12wxWindowBase18SetPreviousHandlerEP12wxEvtHandler
	.quad	_ZN12wxEvtHandler12ProcessEventER7wxEvent
	.quad	_ZN12wxEvtHandler10QueueEventEP7wxEvent
	.quad	_ZN12wxEvtHandler15AddPendingEventERK7wxEvent
	.quad	_ZN12wxEvtHandler16SearchEventTableER12wxEventTableR7wxEvent
	.quad	_ZN12wxWindowBase9TryBeforeER7wxEvent
	.quad	_ZN12wxWindowBase8TryAfterER7wxEvent
	.quad	_ZN12wxEvtHandler12TryValidatorER7wxEvent
	.quad	_ZN12wxEvtHandler9TryParentER7wxEvent
	.quad	_ZNK12wxWindowBase13GetEventTableEv
	.quad	_ZNK12wxWindowBase17GetEventHashTableEv
	.quad	_ZN12wxEvtHandler17DoSetClientObjectEP12wxClientData
	.quad	_ZNK12wxEvtHandler17DoGetClientObjectEv
	.quad	_ZN12wxEvtHandler15DoSetClientDataEPv
	.quad	_ZNK12wxEvtHandler15DoGetClientDataEv
	.quad	_ZN12wxWindowBase7DestroyEv
	.quad	_ZN8wxWindow8SetLabelERK8wxString
	.quad	_ZNK8wxWindow8GetLabelEv
	.quad	_ZN12wxWindowBase7SetNameERK8wxString
	.quad	_ZNK12wxWindowBase7GetNameEv
	.quad	_ZNK8wxWindow18GetLayoutDirectionEv
	.quad	_ZN8wxWindow18SetLayoutDirectionE17wxLayoutDirection
	.quad	_ZNK8wxWindow24AdjustForLayoutDirectionEiii
	.quad	_ZN8wxWindow5RaiseEv
	.quad	_ZN8wxWindow5LowerEv
	.quad	_ZNK12wxWindowBase19GetClientAreaOriginEv
	.quad	_ZNK12wxWindowBase18ClientToWindowSizeERK6wxSize
	.quad	_ZNK12wxWindowBase18WindowToClientSizeERK6wxSize
	.quad	_ZNK12wxWindowBase19GetEffectiveMinSizeEv
	.quad	_ZN12wxWindowBase3FitEv
	.quad	_ZN12wxWindowBase9FitInsideEv
	.quad	_ZN12wxWindowBase12SetSizeHintsEiiiiii
	.quad	_ZN12wxWindowBase19SetVirtualSizeHintsEiiii
	.quad	_ZN12wxWindowBase10SetMinSizeERK6wxSize
	.quad	_ZN12wxWindowBase10SetMaxSizeERK6wxSize
	.quad	_ZN12wxWindowBase16SetMinClientSizeERK6wxSize
	.quad	_ZN12wxWindowBase16SetMaxClientSizeERK6wxSize
	.quad	_ZNK12wxWindowBase10GetMinSizeEv
	.quad	_ZNK12wxWindowBase10GetMaxSizeEv
	.quad	_ZNK12wxWindowBase16GetMinClientSizeEv
	.quad	_ZNK12wxWindowBase16GetMaxClientSizeEv
	.quad	_ZN12wxWindowBase16DoSetVirtualSizeEii
	.quad	_ZNK12wxWindowBase16DoGetVirtualSizeEv
	.quad	_ZNK12wxWindowBase18GetBestVirtualSizeEv
	.quad	_ZNK12wxWindowBase21GetContentScaleFactorEv
	.quad	_ZNK12wxWindowBase19GetWindowBorderSizeEv
	.quad	_ZN12wxWindowBase20InformFirstDirectionEiii
	.quad	_ZN12wxWindowBase13SendSizeEventEi
	.quad	_ZN12wxWindowBase26BeginRepositioningChildrenEv
	.quad	_ZN12wxWindowBase24EndRepositioningChildrenEv
	.quad	_ZN8wxWindow4ShowEb
	.quad	_ZN12wxWindowBase14ShowWithEffectE12wxShowEffectj
	.quad	_ZN12wxWindowBase14HideWithEffectE12wxShowEffectj
	.quad	_ZN12wxWindowBase6EnableEb
	.quad	_ZNK8wxWindow7IsShownEv
	.quad	_ZNK12wxWindowBase15IsShownOnScreenEv
	.quad	_ZN12wxWindowBase18SetWindowStyleFlagEl
	.quad	_ZNK12wxWindowBase18GetWindowStyleFlagEv
	.quad	_ZNK8wxWindow10IsRetainedEv
	.quad	_ZN12wxWindowBase13SetExtraStyleEl
	.quad	_ZN12wxWindowBase9MakeModalEb
	.quad	_ZN12wxWindowBase15SetThemeEnabledEb
	.quad	_ZNK12wxWindowBase15GetThemeEnabledEv
	.quad	_ZN8wxWindow8SetFocusEv
	.quad	_ZN12wxWindowBase15SetFocusFromKbdEv
	.quad	_ZNK12wxWindowBase8HasFocusEv
	.quad	_ZNK12wxWindowBase12AcceptsFocusEv
	.quad	_ZNK12wxWindowBase23AcceptsFocusRecursivelyEv
	.quad	_ZNK12wxWindowBase24AcceptsFocusFromKeyboardEv
	.quad	_ZNK12wxWindowBase12CanBeFocusedEv
	.quad	_ZN8wxWindow11SetCanFocusEb
	.quad	_ZNK12wxWindowBase10IsTopLevelEv
	.quad	_ZN8wxWindow8ReparentEP12wxWindowBase
	.quad	_ZN8wxWindow8AddChildEP12wxWindowBase
	.quad	_ZN8wxWindow11RemoveChildEP12wxWindowBase
	.quad	_ZNK12wxWindowBase17IsClientAreaChildEPK8wxWindow
	.quad	_ZN12wxWindowBase12SetValidatorERK11wxValidator
	.quad	_ZN12wxWindowBase12GetValidatorEv
	.quad	_ZN12wxWindowBase8ValidateEv
	.quad	_ZN12wxWindowBase20TransferDataToWindowEv
	.quad	_ZN12wxWindowBase22TransferDataFromWindowEv
	.quad	_ZN12wxWindowBase10InitDialogEv
	.quad	_ZN12wxWindowBase19SetAcceleratorTableERK18wxAcceleratorTable
	.quad	_ZN8wxWindow11WarpPointerEii
	.quad	_ZNK12wxWindowBase10HasCaptureEv
	.quad	_ZN8wxWindow7RefreshEbPK6wxRect
	.quad	_ZN8wxWindow6UpdateEv
	.quad	_ZN8wxWindow15ClearBackgroundEv
	.quad	_ZN12wxWindowBase9PrepareDCER4wxDC
	.quad	_ZNK8wxWindow16IsDoubleBufferedEv
	.quad	_ZNK8wxWindow11DoIsExposedEii
	.quad	_ZNK8wxWindow11DoIsExposedEiiii
	.quad	_ZNK12wxWindowBase20GetDefaultAttributesEv
	.quad	_ZN8wxWindow19SetBackgroundColourERK8wxColour
	.quad	_ZN8wxWindow19SetForegroundColourERK8wxColour
	.quad	_ZN8wxWindow18SetBackgroundStyleE17wxBackgroundStyle
	.quad	_ZN12wxWindowBase24HasTransparentBackgroundEv
	.quad	_ZNK8wxWindow32IsTransparentBackgroundSupportedEP8wxString
	.quad	_ZN8wxWindow7SetFontERK6wxFont
	.quad	_ZN8wxWindow9SetCursorERK8wxCursor
	.quad	_ZNK8wxWindow13GetCharHeightEv
	.quad	_ZNK8wxWindow12GetCharWidthEv
	.quad	_ZN12wxWindowBase14UpdateWindowUIEl
	.quad	_ZN12wxWindowBase16DoUpdateWindowUIER15wxUpdateUIEvent
	.quad	_ZNK12wxWindowBase16HasMultiplePagesEv
	.quad	_ZNK12wxWindowBase9CanScrollEi
	.quad	_ZN8wxWindow12SetScrollbarEiiiib
	.quad	_ZN8wxWindow12SetScrollPosEiib
	.quad	_ZNK8wxWindow12GetScrollPosEi
	.quad	_ZNK8wxWindow14GetScrollThumbEi
	.quad	_ZNK8wxWindow14GetScrollRangeEi
	.quad	_ZN8wxWindow12ScrollWindowEiiPK6wxRect
	.quad	_ZN8wxWindow11ScrollLinesEi
	.quad	_ZN8wxWindow11ScrollPagesEi
	.quad	_ZN12wxWindowBase20AlwaysShowScrollbarsEbb
	.quad	_ZNK12wxWindowBase22IsScrollbarAlwaysShownEi
	.quad	_ZNK12wxWindowBase18GetHelpTextAtPointERK7wxPointN11wxHelpEvent6OriginE
	.quad	_ZN8wxWindow13SetDropTargetEP12wxDropTarget
	.quad	_ZNK12wxWindowBase13GetDropTargetEv
	.quad	_ZN12wxWindowBase15DragAcceptFilesEb
	.quad	_ZN12wxWindowBase18SetConstraintSizesEb
	.quad	_ZN12wxWindowBase12LayoutPhase1EPi
	.quad	_ZN12wxWindowBase12LayoutPhase2EPi
	.quad	_ZN12wxWindowBase7DoPhaseEi
	.quad	_ZN12wxWindowBase17SetSizeConstraintEiiii
	.quad	_ZN12wxWindowBase14MoveConstraintEii
	.quad	_ZNK12wxWindowBase17GetSizeConstraintEPiS0_
	.quad	_ZNK12wxWindowBase23GetClientSizeConstraintEPiS0_
	.quad	_ZNK12wxWindowBase21GetPositionConstraintEPiS0_
	.quad	_ZN12wxWindowBase6LayoutEv
	.quad	_ZN12wxWindowBase14SetTransparentEh
	.quad	_ZN12wxWindowBase17CanSetTransparentEv
	.quad	_ZN8wxWindow14OnInternalIdleEv
	.quad	_ZN12wxWindowBase14SendIdleEventsER11wxIdleEvent
	.quad	_ZNK8wxWindow9GetHandleEv
	.quad	_ZN12wxWindowBase15AssociateHandleEP10_GtkWidget
	.quad	_ZN12wxWindowBase16DissociateHandleEv
	.quad	_ZN12wxWindowBase17InheritAttributesEv
	.quad	_ZNK12wxWindowBase20ShouldInheritColoursEv
	.quad	_ZNK12wxWindowBase22CanBeOutsideClientAreaEv
	.quad	_ZNK12wxWindowBase19CanApplyThemeBorderEv
	.quad	_ZN12wxWindowBase31GetMainWindowOfCompositeControlEv
	.quad	_ZNK12wxWindowBase21IsTopNavigationDomainEv
	.quad	_ZN8wxWindow16DoMoveInTabOrderEPS_N12wxWindowBase11WindowOrderE
	.quad	_ZN8wxWindow12DoNavigateInEi
	.quad	_ZN8wxWindow8DoEnableEb
	.quad	_ZNK12wxWindowBase16GetDefaultBorderEv
	.quad	_ZNK12wxWindowBase26GetDefaultBorderForControlEv
	.quad	_ZN12wxWindowBase18SetInitialBestSizeERK6wxSize
	.quad	_ZNK8wxWindow15DoGetTextExtentERK8wxStringPiS3_S3_S3_PK6wxFont
	.quad	_ZNK8wxWindow16DoClientToScreenEPiS0_
	.quad	_ZNK8wxWindow16DoScreenToClientEPiS0_
	.quad	_ZNK12wxWindowBase9DoHitTestEii
	.quad	_ZN8wxWindow14DoCaptureMouseEv
	.quad	_ZN8wxWindow14DoReleaseMouseEv
	.quad	_ZNK8wxWindow13DoGetPositionEPiS0_
	.quad	_ZNK12wxWindowBase19DoGetScreenPositionEPiS0_
	.quad	_ZNK8wxWindow9DoGetSizeEPiS0_
	.quad	_ZNK8wxWindow15DoGetClientSizeEPiS0_
	.quad	_ZNK12wxWindowBase13DoGetBestSizeEv
	.quad	_ZNK12wxWindowBase19DoGetBestClientSizeEv
	.quad	_ZNK12wxWindowBase21DoGetBestClientHeightEi
	.quad	_ZNK12wxWindowBase20DoGetBestClientWidthEi
	.quad	_ZN8wxWindow9DoSetSizeEiiiii
	.quad	_ZN8wxWindow15DoSetClientSizeEii
	.quad	_ZN12wxWindowBase14DoSetSizeHintsEiiiiii
	.quad	_ZNK8wxWindow15DoGetBorderSizeEv
	.quad	_ZN8wxWindow12DoMoveWindowEiiii
	.quad	_ZN12wxWindowBase8DoCentreEi
	.quad	_ZN8wxWindow12DoSetToolTipEP9wxToolTip
	.quad	_ZN8wxWindow11DoPopupMenuEP6wxMenuii
	.quad	_ZNK12wxWindowBase27AdjustForParentClientOriginERiS0_i
	.quad	_ZN12wxWindowBase18DoSetWindowVariantE15wxWindowVariant
	.quad	_ZN8wxWindow8DoFreezeEv
	.quad	_ZN8wxWindow6DoThawEv
	.quad	_ZN8wxWindow16GetConnectWidgetEv
	.quad	_ZNK8wxWindow15GTKProcessEventER7wxEvent
	.quad	_ZN8wxWindow17GTKHandleRealizedEv
	.quad	_ZNK8wxWindow31GTKNeedsToFilterSameWindowFocusEv
	.quad	_ZNK8wxWindow22GTKWidgetNeedsMnemonicEv
	.quad	_ZN8wxWindow22GTKWidgetDoSetMnemonicEP10_GtkWidget
	.quad	_ZNK8wxWindow12GTKGetWindowER17wxArrayGdkWindows
	.quad	_ZN8wxWindow15GTKApplyToolTipEPKc
	.quad	_ZNK8wxWindow24GTKIsTransparentForMouseEv
	.quad	_ZNK8wxWindow19GTKIMFilterKeypressEP12_GdkEventKey
	.quad	_ZN8wxWindow18DoApplyWidgetStyleEP11_GtkRcStyle
	.quad	_ZNK8wxWindow14GTKNeedsParentEv
	.quad	_ZN8wxWindow11AddChildGTKEPS_
	.quad	__cxa_pure_virtual
	.weak	_ZTV20wxObjectEventFunctor
	.section	.data.rel.ro.local._ZTV20wxObjectEventFunctor,"awG",@progbits,_ZTV20wxObjectEventFunctor,comdat
	.align 8
	.type	_ZTV20wxObjectEventFunctor, @object
	.size	_ZTV20wxObjectEventFunctor, 64
_ZTV20wxObjectEventFunctor:
	.quad	0
	.quad	_ZTI20wxObjectEventFunctor
	.quad	_ZN20wxObjectEventFunctorD1Ev
	.quad	_ZN20wxObjectEventFunctorD0Ev
	.quad	_ZN20wxObjectEventFunctorclEP12wxEvtHandlerR7wxEvent
	.quad	_ZNK20wxObjectEventFunctor10IsMatchingERK14wxEventFunctor
	.quad	_ZNK20wxObjectEventFunctor13GetEvtHandlerEv
	.quad	_ZNK20wxObjectEventFunctor12GetEvtMethodEv
	.section	.text._ZN20wxObjectEventFunctorD2Ev,"axG",@progbits,_ZN20wxObjectEventFunctorD5Ev,comdat
	.align 2
	.weak	_ZN20wxObjectEventFunctorD2Ev
	.type	_ZN20wxObjectEventFunctorD2Ev, @function
_ZN20wxObjectEventFunctorD2Ev:
.LFB15424:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV20wxObjectEventFunctor(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN14wxEventFunctorD2Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15424:
	.size	_ZN20wxObjectEventFunctorD2Ev, .-_ZN20wxObjectEventFunctorD2Ev
	.weak	_ZN20wxObjectEventFunctorD1Ev
	.set	_ZN20wxObjectEventFunctorD1Ev,_ZN20wxObjectEventFunctorD2Ev
	.section	.text._ZN20wxObjectEventFunctorD0Ev,"axG",@progbits,_ZN20wxObjectEventFunctorD5Ev,comdat
	.align 2
	.weak	_ZN20wxObjectEventFunctorD0Ev
	.type	_ZN20wxObjectEventFunctorD0Ev, @function
_ZN20wxObjectEventFunctorD0Ev:
.LFB15426:
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
	call	_ZN20wxObjectEventFunctorD1Ev
	movq	-8(%rbp), %rax
	movl	$32, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15426:
	.size	_ZN20wxObjectEventFunctorD0Ev, .-_ZN20wxObjectEventFunctorD0Ev
	.weak	_ZTV20wxThreadHelperThread
	.section	.data.rel.ro._ZTV20wxThreadHelperThread,"awG",@progbits,_ZTV20wxThreadHelperThread,comdat
	.align 8
	.type	_ZTV20wxThreadHelperThread, @object
	.size	_ZTV20wxThreadHelperThread, 72
_ZTV20wxThreadHelperThread:
	.quad	0
	.quad	_ZTI20wxThreadHelperThread
	.quad	_ZN8wxThread11TestDestroyEv
	.quad	_ZN20wxThreadHelperThreadD1Ev
	.quad	_ZN20wxThreadHelperThreadD0Ev
	.quad	_ZN20wxThreadHelperThread5EntryEv
	.quad	_ZN8wxThread8OnDeleteEv
	.quad	_ZN8wxThread6OnKillEv
	.quad	_ZN8wxThread6OnExitEv
	.section	.text._ZN20wxThreadHelperThreadD2Ev,"axG",@progbits,_ZN20wxThreadHelperThreadD5Ev,comdat
	.align 2
	.weak	_ZN20wxThreadHelperThreadD2Ev
	.type	_ZN20wxThreadHelperThreadD2Ev, @function
_ZN20wxThreadHelperThreadD2Ev:
.LFB15436:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV20wxThreadHelperThread(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8wxThreadD2Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15436:
	.size	_ZN20wxThreadHelperThreadD2Ev, .-_ZN20wxThreadHelperThreadD2Ev
	.weak	_ZN20wxThreadHelperThreadD1Ev
	.set	_ZN20wxThreadHelperThreadD1Ev,_ZN20wxThreadHelperThreadD2Ev
	.section	.text._ZN20wxThreadHelperThreadD0Ev,"axG",@progbits,_ZN20wxThreadHelperThreadD5Ev,comdat
	.align 2
	.weak	_ZN20wxThreadHelperThreadD0Ev
	.type	_ZN20wxThreadHelperThreadD0Ev, @function
_ZN20wxThreadHelperThreadD0Ev:
.LFB15438:
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
	call	_ZN20wxThreadHelperThreadD1Ev
	movq	-8(%rbp), %rax
	movl	$40, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15438:
	.size	_ZN20wxThreadHelperThreadD0Ev, .-_ZN20wxThreadHelperThreadD0Ev
	.weak	_ZTI21wxMDIClientWindowBase
	.section	.data.rel.ro._ZTI21wxMDIClientWindowBase,"awG",@progbits,_ZTI21wxMDIClientWindowBase,comdat
	.align 8
	.type	_ZTI21wxMDIClientWindowBase, @object
	.size	_ZTI21wxMDIClientWindowBase, 24
_ZTI21wxMDIClientWindowBase:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS21wxMDIClientWindowBase
	.quad	_ZTI8wxWindow
	.weak	_ZTS21wxMDIClientWindowBase
	.section	.rodata._ZTS21wxMDIClientWindowBase,"aG",@progbits,_ZTS21wxMDIClientWindowBase,comdat
	.align 16
	.type	_ZTS21wxMDIClientWindowBase, @object
	.size	_ZTS21wxMDIClientWindowBase, 24
_ZTS21wxMDIClientWindowBase:
	.string	"21wxMDIClientWindowBase"
	.weak	_ZTI20wxMDIParentFrameBase
	.section	.data.rel.ro._ZTI20wxMDIParentFrameBase,"awG",@progbits,_ZTI20wxMDIParentFrameBase,comdat
	.align 8
	.type	_ZTI20wxMDIParentFrameBase, @object
	.size	_ZTI20wxMDIParentFrameBase, 24
_ZTI20wxMDIParentFrameBase:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS20wxMDIParentFrameBase
	.quad	_ZTI7wxFrame
	.weak	_ZTS20wxMDIParentFrameBase
	.section	.rodata._ZTS20wxMDIParentFrameBase,"aG",@progbits,_ZTS20wxMDIParentFrameBase,comdat
	.align 16
	.type	_ZTS20wxMDIParentFrameBase, @object
	.size	_ZTS20wxMDIParentFrameBase, 23
_ZTS20wxMDIParentFrameBase:
	.string	"20wxMDIParentFrameBase"
	.weak	_ZTI5asApp
	.section	.data.rel.ro._ZTI5asApp,"awG",@progbits,_ZTI5asApp,comdat
	.align 8
	.type	_ZTI5asApp, @object
	.size	_ZTI5asApp, 24
_ZTI5asApp:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS5asApp
	.quad	_ZTI5wxApp
	.weak	_ZTS5asApp
	.section	.rodata._ZTS5asApp,"aG",@progbits,_ZTS5asApp,comdat
	.type	_ZTS5asApp, @object
	.size	_ZTS5asApp, 7
_ZTS5asApp:
	.string	"5asApp"
	.weak	_ZTI20wxObjectEventFunctor
	.section	.data.rel.ro._ZTI20wxObjectEventFunctor,"awG",@progbits,_ZTI20wxObjectEventFunctor,comdat
	.align 8
	.type	_ZTI20wxObjectEventFunctor, @object
	.size	_ZTI20wxObjectEventFunctor, 24
_ZTI20wxObjectEventFunctor:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS20wxObjectEventFunctor
	.quad	_ZTI14wxEventFunctor
	.weak	_ZTS20wxObjectEventFunctor
	.section	.rodata._ZTS20wxObjectEventFunctor,"aG",@progbits,_ZTS20wxObjectEventFunctor,comdat
	.align 16
	.type	_ZTS20wxObjectEventFunctor, @object
	.size	_ZTS20wxObjectEventFunctor, 23
_ZTS20wxObjectEventFunctor:
	.string	"20wxObjectEventFunctor"
	.weak	_ZTI20wxThreadHelperThread
	.section	.data.rel.ro._ZTI20wxThreadHelperThread,"awG",@progbits,_ZTI20wxThreadHelperThread,comdat
	.align 8
	.type	_ZTI20wxThreadHelperThread, @object
	.size	_ZTI20wxThreadHelperThread, 24
_ZTI20wxThreadHelperThread:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS20wxThreadHelperThread
	.quad	_ZTI8wxThread
	.weak	_ZTS20wxThreadHelperThread
	.section	.rodata._ZTS20wxThreadHelperThread,"aG",@progbits,_ZTS20wxThreadHelperThread,comdat
	.align 16
	.type	_ZTS20wxThreadHelperThread, @object
	.size	_ZTS20wxThreadHelperThread, 23
_ZTS20wxThreadHelperThread:
	.string	"20wxThreadHelperThread"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB15455:
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
	jne	.L348
	cmpl	$65535, -8(%rbp)
	jne	.L348
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
	leaq	_Z11wxCreateAppv(%rip), %rsi
	leaq	wxTheAppInitializer(%rip), %rdi
	call	_ZN16wxAppInitializerC1EPFP12wxAppConsolevE
.L348:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15455:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB15553:
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
.LFE15553:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1072693248
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
