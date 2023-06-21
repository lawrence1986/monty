#include "monty.h"
/**
 * div_f - divides the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void div_f(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0;
	int temp;

	h = *head;
	for (; h; h = h->next)
	{
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n / h->n;
	h->next->n =temp;
	*head = h->next;
	free(h);
}
