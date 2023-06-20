#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *current = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	*head = (*head)->next;
	(*head)->prev = NULL;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = tmp;
	tmp->next = NULL;
	tmp->prev = current;
}
