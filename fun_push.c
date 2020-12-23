#include "monty.h"
/**
 * fun_push - creates nodes at the top of the stack
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: creates nodes at the top of the stack
 */

void fun_push(stack_t **stack, unsigned int line_c)
{
	int number;
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return;

	if (command[1][0] >= 48 && command[1][0] <= 57)
	{
		number = atoi(command[1]);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_c);
		exit(EXIT_FAILURE);
	}
	temp->n = number;
	temp->prev = NULL;
	if (*stack == NULL)
		temp->next = NULL;
	else
	{
		temp->next = *stack;
		(*stack)->prev = temp;
	}
	*stack = temp;
}
