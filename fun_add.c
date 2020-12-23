#include "monty.h"

/**
 * fun_add - function that add the value 2 values on the front
 * @stack: pointer  to the top
 * @line_c: Actual line of the file
 * Return: Always void.
 */


void fun_add(stack_t **stack, unsigned int line_c)
{
	stack_t *temp;
	int result, counter = 0;

	temp = *stack;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}

	if (counter < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_c);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	result = temp->n + temp->next->n;
	fun_pop(stack, line_c);
	fun_pop(stack, line_c);

	temp->n = result;
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
