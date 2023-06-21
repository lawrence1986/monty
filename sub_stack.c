#include "monty.h"

/**
 * sub_stack - Checks if the stack has at least two nodes.
 * @head: Stack head.
 * @count: Line number.
 *
 * Return: 1 if the stack has at least two nodes, 0 otherwise.
 */
int sub_stack(stack_t *head, unsigned int count)
{
	int nodes = 0;
	stack_t *aux = head;

	while (aux != NULL)
	{
		nodes++;
		aux = aux->next;
	}

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(head);
		exit(EXIT_FAILURE);
	}

	return (1);
}
