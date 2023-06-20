#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@count: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	nodes = 0;
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
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
