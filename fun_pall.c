#include "monty.h"

/**
 * fun_pall - function prints all the values on the stack.
 * @stack: pointer  to the top1
 * @line_c: Actual line of the file
 * Return: Always void.
 */

void fun_pall(stack_t **stack, unsigned int line_c)
{
	stack_t *temp;

	(void) line_c;
	temp = *stack;
	if (*stack == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		fprintf(stdout, "%i\n", temp->n);
		temp = temp->next;
	}
}
