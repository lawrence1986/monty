#include "monty.h"
void pop_exit(unsigned int count, stack_t **head)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", count);
    fclose(bus.file);
    free(bus.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
}
