#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	for (h = *head; h; h = h->next)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
	}
	printf("\n");
}
