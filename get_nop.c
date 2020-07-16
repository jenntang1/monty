#include "monty.h"

/**
 *  get_nop - function that doesn't do anything
 *  @stack: pointer to top of the stack
 *  @line_number: line number where opcode appears
 *  Return: nothing
 */
void get_nop(stack_t **stack, unsigned int line_number)
{
	/* Make arguments void to avoid function executing */
	(void) stack;
	(void) line_number;
}
