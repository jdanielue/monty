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
	int number, i = 0;
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	(void) line_c;

	if (command[1] == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_c);
		exit(EXIT_FAILURE);
	}
	if (command[1][0] == '-')
		i++;
	for (; command[1][i]; i++)
	{
		if (command[1][i] < '0' || command[1][i] > '9')
		{
		fprintf(stderr, "L%d: usage: push integer\n", line_c);
		exit(EXIT_FAILURE);
		}
	}
	number = atoi(command[1]);

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
