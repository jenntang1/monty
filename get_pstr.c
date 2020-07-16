#include "monty.h"

/**
 * get_pstr - function that prints ascii value of elements
 * @stack: pointer to head of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_pstr(stack_t **stack, unsigned int line_number)
{
	/* Declare and initialize variable pointer to top of stack */
	stack_t *top_node = *stack;
	/* Make argument void */
	(void)line_number;
	/* If there's no stack, exit */
	if ((stack == NULL) || (*stack == NULL))
	{
		printf("\n");
	}
	/**
	 * If top element has an ASCII value, print it
	 * Iterate through the stack
	 * Break if element is not greater than zero and no ASCII value
	 */
	else
	{
		while (top_node != NULL)
		{
			if ((top_node->n > 0) && (isascii(top_node->n)))
			{
				printf("%c", top_node->n);
				top_node = top_node->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
