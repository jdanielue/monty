#include "monty.h"
/**
 * fun_swap - swaps the two top nodes of the stack1
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: swaps the two top nodes of the stack
 */

void fun_swap(stack_t **stack, unsigned int line_c)
{
	stack_t *temp1, *temp2, *temp3;
	int i;

	temp3 = *stack;

	if (*(stack) == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_c);
		exit(EXIT_FAILURE);
	}
	for (i = 0; temp3 != NULL; i++)
	{
		temp3 = temp3->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_c);
		exit(EXIT_FAILURE);
	}


	temp1 = *stack;
	temp2 = (*stack)->next;
	temp1->next = temp2->next;
	temp2->prev = NULL;
	temp2->next = temp1;
	*stack = temp2;
}
