#include "monty.h"

/**
 * get_push - function that pushes an element onto top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 0. push, pall
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_push(stack_t **stack, unsigned int line_number, char *temp)
{
	(void)line_number;
	
	stack_t *new_top;
	int n = 0;

	n = atoi(temp);

	new_top = malloc(sizeof(stack_t));
	if (new_top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_top->n = n;
	new_top->next = NULL;
	new_top->prev = NULL;

	if (*stack)
	{
		new_top->next = *stack;
		(*stack)->prev = new_top;
		*stack = new_top;
	}
	*stack = new_top;
}
