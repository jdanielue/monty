#include "monty.h"

/**
 * fun_pall - function prints all the values on the stack.
 * @stack: pointer  to the top
 * @line_c: Actual line of the file
 * Return: Always void.
 */

void fun_pall(stack_t **stack, unsigned int line_c)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_c);
		exit(EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		fprintf(stdout, "%i\n", temp->n);
		temp = temp->next;
	}
}
