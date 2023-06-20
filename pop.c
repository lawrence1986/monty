#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
    {
        pop_exit(count, head);
    }
    h = *head;
    *head = h->next;
    free(h);
}
