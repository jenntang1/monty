#include "monty.h"

/**
 * get_mod - function that finds the modulus of top two elements
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 9. mod
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = (*stack)->next;
		second->n %= (second->n / first->n);
		*stack = second;
		free(first);
	}
}