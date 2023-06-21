#include "monty.h"
/**
 * f_sub - Subtraction.
 * @head: Stack head.
 * @count: Line number.
 *
 * Return: No return.
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int sus;

	sub_stack(*head, count);
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
