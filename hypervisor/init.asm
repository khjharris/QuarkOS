/**
	*Runs on start after bootloader
	*Author: Noah malhi - malhin@bu.edu
**/

global _main
_main:
	jmp		_init
//may need to setup alignment --> believe they start at 0x00
_vector_table:
	//based on page 457 of Quakc1000
	entry _unhandled_vec	//Divide by 0
	entry _unhandled_vec	//Debug Exception
	entry _unhandled_vec	//NMI Interrupt
	entry _unhandled_vec	//Breakpoint 
	entry _unhandled_vec	//overflow
	entry _unhandled_vec	//bound range exceeded 		
	entry _unhandled_vec	//Invalid opcod e
	entry _unhandled_vec	//Device not available
	entry _unhandled_vec	//Double fault
	entry _unhandled_vec	//Intel reserved
	entry _unhandled_vec	//Invalid TSS
	entry _unhandled_vec	//Segment not present
	entry _unhandled_vec    //Stack segment fault
	entry _unhandled_vec	//General protection
	entry _unhandled_vec	//Page fault
	entry _unhandled_vec	//Intel reserved
	entry _unhandled_vec	//floating point error
	entry _unhandled_vec	//alignment check
	//18-31 Intel Reserved
	//32-255 User Defined interrupts

//dont use %rsp --> includes stack pointer %esp
_init:
	//create el2 stack and point to it
	mov 	$el2_stack_end, %rax
	mov 	%rax, %esp

	//Clear binaries???
	
	//jump to srart routine
	jmp		_start

//if reaches here in assembly then goes to failsafe
fail:	jmp		failsafe
