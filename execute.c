#include "monty.h"

/* Function prototypes */
void handle_unknown_instruction(char *op, unsigned int counter,
FILE *file, char *content, stack_t **stack);
void execute_opcode(char *op, stack_t **stack, unsigned int counter);
void initialize_instruction_set(instruction_t *opst);
void cleanup(FILE *file, char *content, stack_t **stack);

/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: pointer to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
instruction_t opst[20];
unsigned int i = 0;
char *op;

initialize_instruction_set(opst);

op = strtok(content, " \n\t");
if (op && op[0] == '#')
return (0);

bus.arg = strtok(NULL, " \n\t");

while (opst[i].opcode && op)
{
if (strcmp(op, opst[i].opcode) == 0)
{
execute_opcode(op, stack, counter);
return (0);
}
i++;
}

if (op && opst[i].opcode == NULL)
{
handle_unknown_instruction(op, counter, file, content, stack);
}

return (1);
}

/* Function to handle */
void handle_unknown_instruction(char *op, unsigned int count,
FILE *file, char *content, stack_t **stack)
{
fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

/**
 * execute_opcode - this handles codec
 * @count: line number
 * @op: opcode
 * @stack: enhances stack process
 */

void execute_opcode(char *op, stack_t **stack, unsigned int count)
{
/* Add the implementation of opcode execution */
}

/**
  * initialize_instruction_set - initial set
  * @opst: option set
  */

void initialize_instruction_set(instruction_t *opst)
{
opst[0] = (instruction_t){"push", f_push};
opst[1] = (instruction_t){"pall", f_pall};
opst[2] = (instruction_t){"pint", f_pint};
opst[3] = (instruction_t){"pop", f_pop};
opst[4] = (instruction_t){"swap", f_swap};
opst[5] = (instruction_t){"add", add_f};
opst[6] = (instruction_t){"nop", f_not};
opst[7] = (instruction_t){"sub", f_sub};
opst[8] = (instruction_t){"div", div_f};
opst[9] = (instruction_t){"mul", mul_f};
opst[10] = (instruction_t){"mod", mod_f};
opst[11] = (instruction_t){"pchar", print_char};
opst[12] = (instruction_t){"pstr", f_pstr};
opst[13] = (instruction_t){"rotl", f_rotl};
opst[14] = (instruction_t){"rotr", rot_stack};
opst[15] = (instruction_t){"queue", f_queue};
opst[16] = (instruction_t){"stack", f_stack};
opst[17] = (instruction_t){NULL, NULL};
}

/**
  * cleanup - sync process
  * @file: return archive
  * @stack: structure
  * @content: this is the contents embed
  */
void cleanup(FILE *file, char *content, stack_t **stack)
{
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
