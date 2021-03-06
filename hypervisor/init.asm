	;Runs on start after bootloader
	;Author: Noah malhi - malhin@bu.edu
	;Ring 0 -> Hypervisor & kernel
	;Ring 1 -> User level

section .text
global _main

_main:
	jmp		_init
	
; may need to setup alignment --> believe they start at 0x00 
	%macro entry 1
	jmp 	%1
	%endmacro
	
_vector_table:
	entry _vec_handler	;divide by 0x00
	entry _vec_handler	;Debug Exception; 0x01
	entry _vec_handler	;NMI Interrupt; 0x02
	entry _vec_handler	;Breakpoint; 0x03
	entry _vec_handler	;overflow; 0x04
	entry _vec_handler	;bound range exceeded; 0x05 		
	entry _vec_handler	;Invalid opcode; 0x06
	entry _vec_handler	;Device not available; 0x07
	entry _vec_handler	;Double fault 0x08
	entry _vec_handler	;Intel reserved; 0x09
	entry _vec_handler	;Invalid TSS 0x0A
	entry _vec_handler	;Segment not present; 0x0B
	entry _vec_handler  	;Stack segment fault; 0x0C
	entry _vec_handler	;General protection; 0x0D
	entry _vec_handler	;Page fault; 0x0E
	entry _vec_handler	;Intel reserved; 0x0F
	entry _vec_handler	;floating point error; 0x10
	entry _vec_handler	;alignment check; 0x11
	;18-31 Intel Reserved
	;32-255 User Defined interrupts

_init:
	;create ring0 stack and point to it
	;ring0_stack_end needs to be set to the address of the end of the hypervisor
	mov	$ring0_stack_end, r8 
	mov 	r8, esp
	;Clear binaries -> pushing registers onto the stack, clearing the binaries then restoring to a reg
	push	r8
	push 	r9
	jmp 	_clear_bss
	pop	r9
	pop	r8
	
	;jump to start routine
	jmp		_start

;if reaches here in assembly then goes to failsafe
fail:	jmp		failsafe


_vec_handler:
	_reg_state_save	%r8

	;r8 pointer to sp
	mov	r8, esp
	jmp		_vec_handler

	;load saved registers and interrupt return
	_reg_state_load %r8
	iret

%macro _reg_state_save 1
	;push general purpose registers to stack
	push	%r15
	push	%r14
	push	%r13
	push	%r12
	push	%r11
	push	%r10
	push	%r9
	push	%r8
	
%endmacro

%macro _reg_state_load 1
	;pop general purpose registers to restore
	pop		%r8
	pop		%r9
	pop		%r10
	pop		%r11
	pop		%r12
	pop		%r13
	pop		%r14
	pop		%r15
%endmacro
	
