#include "monty.h"

/**
 * fun_pop - function that remove the value on the front1.
 * @stack: pointer  to the top
 * @line_c: Actual line of the file
 * Return: Always void.
 */

void fun_pop(stack_t **stack, unsigned int line_c)
{
	stack_t *temp;

	temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_c);
		exit(EXIT_FAILURE);
	}
	if (temp->next != NULL)
	{
		*stack = temp->next;
		temp->next->prev = NULL;
		free(temp);
	}
	else
	{
		*stack = temp->next;
		free(temp);
	}
}
