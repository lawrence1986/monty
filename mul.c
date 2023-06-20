#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void mul_f(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0;

	for (h = *head; h; h = h->next)
	{
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	h->next->n *= h->n;
	*head = h->next;
	free(h);
}
