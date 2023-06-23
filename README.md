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

## Tasks
All of the following files are programs written in C:

| Task Num | Question |
| -------- | ----------- |
| ` 0. push, pall` | Implement the push and pall opcodes.|
| ` 1. pint` | Implement the pint opcode.|
| ` 2. pop` | Implement the pop opcode.|
| ` 3. swap` | Implement the swap opcode.|
| ` 4. add` | Implement the add opcode.|
| ` 5. nop ` | Implement the nop opcode. |
| ` 6. sub` | Implement the sub opcode. |
| ` 7. div` | Implement the div opcode.| 
| ` 8. mul` | Implement the mul opcode. |
| ` 9. mod` | Implement the mod opcode.|
| ` 10. comments` |When the first non-space character of a line is #, treat this line as a comment (don’t do anything) |
| ` 11. pchar` | Implement the pchar opcode. |

## Filename
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| ` 0. push.c` | Implement the push and pall opcodes.|
| ` 1. pint_char.c` | Implement the pint opcode.|
| ` 2. pop_func.c` | Implement the pop opcode.|
| ` 3. swapping.c` | Implement the swap opcode.|
| ` 4. add_func.c` | Implement the add opcode.|
| ` 5. nop.c ` | Implement the nop opcode. |
| ` 6. sub_func.c` | Implement the sub opcode. |
| ` 7. div_func.c` | Implement the div opcode.|
| ` 8. mul_func.c` | Implement the mul opcode. |
| ` 9. mod_func.c` | Implement the mod opcode.|
| ` 10.addingnode.c` |This simply implements add node |
| ` 11. pstr.c` | Implement the pstr opcode. |
| ` 12. execute.c` | Implement the exec code. |
| ` 13. free_stack.c` | Implement the free_stack.c. |
| ` 14. handle_e.c` | Implement the handle_e script. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
| ` 11. pchar` | Implement the pchar opcode. |
