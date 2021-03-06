#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **command;

void search_function(unsigned int line_c, stack_t **stack);
void fun_nop(stack_t **stack, unsigned int line_c);
void fun_swap(stack_t **stack, unsigned int line_c);
void fun_sub(stack_t **stack, unsigned int line_c);
void fun_push(stack_t **stack, unsigned int line_c);
void fun_pint(stack_t **stack, unsigned int line_c);
void fun_nop(stack_t **stack, unsigned int line_c);
void fun_add(stack_t **stack, unsigned int line_c);
void fun_pall(stack_t **stack, unsigned int line_c);
void fun_pop(stack_t **stack, unsigned int line_c);
void fun_div(stack_t **stack, unsigned int line_c);
void fun_mul(stack_t **stack, unsigned int line_c);

void special_free(char **cartman);
void node_free(stack_t *top);
int fun_empty_spaces(char *my_buffer);


#endif
