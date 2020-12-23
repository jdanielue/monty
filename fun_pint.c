#include "monty.h"
/**
 * fun_pint - doubly linked list representation of a stack (or queue)
 * @stack: Pointer to top of stack1
 * @line_c: Line count
 *
 * Description: creates nodes at the top of the stack
 */

void fun_pint(stack_t **stack, unsigned int line_c)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_c);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
