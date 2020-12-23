#include "monty.h"

/**
 * fun_add - function that add the value 2 values on the front
 * @stack: pointer  to the top
 * @line_c: Actual line of the file
 * Return: Always void.
 */


void fun_add(stack_t **stack, unsigned int line_c)
{
	stack_t *temp = *stack;
	int result;

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
