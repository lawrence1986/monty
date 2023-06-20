#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		handle_error_and_exit(count, head);
	}
	printf("%d\n", (*head)->n);
}
