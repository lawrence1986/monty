#include "monty.h"
/**
 * mod_f - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void mod_f(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	for (; h; h = h->next)
	{
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		mod_error(count, head);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		mod_error(count, head);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
