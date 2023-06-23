# 0x19. C - Stacks, Queues - LIFO, FIFO


This is a TEAM Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about What do LIFO and FIFO mean, What is stack and when to use it, What is queue, and when to use it, What are the common implementation of stacks and queues, common use cases and proper way to use global variables. **C language**.

## Requirement
* All files are compiled on Ubuntu 20.04 LTS using  `gcc` with using the options -Wall -Werror -Wextra -pedantic -std=c89
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You allowed to use a maximum of one global variable
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called monty.h
* Don’t forget to push your header file
* All your header files should be include guarded
* You are expected to do the tasks in the order shown in the project
* Team Member: Lawrence Maduabuchi & Abdullahi Ngui.
* Date: June 23rd 2023


## GitHub
* There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

## Compilation 
* ALL code would be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

## The Monty language
* Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files
* Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

##The monty program
* Usage: monty file
* where file is the path to the file containing Monty byte code
* If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
* If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file
* nknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE

## Files
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| ` 0. push, pall` | Implement the push and pall opcodes.|
| ` 1. pint` | Implement the pint opcode.|
| ` 2. pop` | Implement the pop opcode.|
| ` fill_oct_array.c` | Prints the value of a pointer variable|
| ` get_print_func.c` | Write a function calculate active flags.|
| ` handle_buff.c ` | Calculates the precision for printing |
| ` long_oct_array.c` | Calculates the size to cast the argument |
| ` print_add.c` | Calculates the width for printing 
| ` print_bnr.c` | Prints an argument based on its type |
| ` main.h` | source file for all executable prototypes for program|
| ` print_buf.c` | A function that evaluates if a char is printable|
| ` print_chr.c` | A function that explicitly prints a string |


## Tasks
All of the following files are programs written in C:

| Task | Question |
| -------- | ----------- |
| ` 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
| Write a function that produces output according to a format.| Prototype: int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings)
| ` 1. Education is when you read the fine print. Experience is what you get if you don't| Handle the following conversion specifiers: d , i.| You don’t have to handle the flag characters
| ` 2. With a face like mine, I do better in print
| Handle the following custom conversion specifiers: b|the unsigned int argument is converted to binary
| ` 3. What one has not experienced, one will never understand in print| Handle the following conversion specifiers: u, o, x, X|You don’t have to handle field width
| ` 4. Nothing in fine print is ever good news
| Use a local buffer of 1024 chars in order to call write as little as possible. |
| ` 5. My weakness is wearing too much leopard print| Handle the following custom conversion specifier: s – prints the string| Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)| ` 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print| Handle the following conversion specifier: p|You don’t have to handle precision
| ` 7. The big print gives and the small print takes away
| Handle the following flag characters for non-custom conversion specifiers: +, space, #|
| ` 8. Sarcasm is lost in print
| Handle the following length modifiers for non-custom conversion specifiers: I, h|Conversion specifiers to handle: d, i, u, o, x, X
| ` 9. Print some money and give it to us for the rain forests
| Handle the field width for non-custom conversion specifiers.|
| ` 10. The negative is the equivalent of the composer's score, and the print the performance
| Handle the precision for non-custom conversion specifiers.|
| ` 11. It's depressing when you're still around and your albums are out of print
| Handle the 0 flag character for non-custom conversion specifiers.|
