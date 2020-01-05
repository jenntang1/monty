#include "monty.h"

void free_stack(stack_t **head)
{
	stack_t *new_node1 = NULL;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		new_node1 = (*head)->next;
		free(*head);
		*head = new_node1;
	}
}
