#include "monty.h"
/**
* pop_exit - Handles error condition when trying to pop an element.
* @count: The line number where the error occurred.
* @head: A pointer to the head of the stack.
*/
void pop_exit(unsigned int count, stack_t **head)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", count);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

