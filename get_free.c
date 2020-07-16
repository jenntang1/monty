#include "monty.h"

/**
 *  get_free - function that frees the stack
 *  @stack: pointer to the top of the stack
 *  Return: nothing
 */
void get_free(stack_t *stack)
{
	/**
	 * Check that there's a stack
	 * Recursively move pointer to the next element
	 * Freeing the elements as the pointer moves
	 */
	if (stack)
	{
		get_free(stack->next);
		free(stack);
	}
}
