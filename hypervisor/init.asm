/**
	*Runs on start after bootloader
	*Author: Noah malhi - malhin@bu.edu
**/

global _start
_main:
	b	 _init

	.macro	 entry tag
		.align		7
		b	/tag	
	.endm
	.align	11
	.global vector_table:
	
vector_table:
	entry _unhandled_vec	//Divide by 0
	entry _unhandled_vec	//Debug Exception
	//entry _unhandled_vec	//Reserved
	entry _unhandled_vec	//Breakpoint (INT3)
	//entry _unhandled_vec	//Reserved
	//entry _unhandled_vec	//Reserved		
	entry _unhandled_vec	//Invalid opcode
	//entry _unhandled_vec	//reserved
	entry _unhandled_vec	//Double fault
	//entry _unhandled_vec	//reserved
	//entry _unhandled_vec	//Reserved
	entry _unhandled_vec	//not Present
	//entry _unhandled_vec  //reserved
	entry _unhandled_vec	//General protection
	//entry _unhandled_vec	//reserved
	//entry _unhandled_vec	//Reserved
	entry _unhandled_vec	//machine check
	//entry _unhandled_vec	//reserved
	//19-31 Reserved
	entry _unhandled_vec	//asychronous IRQ, 320255
	
_init:
	mov x2, 
