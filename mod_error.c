#include "monty.h"

void mod_error(unsigned int count, stack_t **head)
{
	fprintf(stderr, "L%d: ", count);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
