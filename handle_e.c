#include "monty.h"
/**
 * handle_error_and_exit - handles error and exits the program
 */
void handle_error_and_exit(unsigned int count, stack_t **head)
{
    fprintf(stderr, "L%u: can't pint, stack empty\n", count);
    fclose(bus.file);
    free(bus.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
}
