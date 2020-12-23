#include "monty.h"
/**
 * fun_pint - doubly linked list representation of a stack (or queue)
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: creates nodes at the top of the stack
 */

void fun_pint(stack_t **stack, unsigned int line_c)
{
	(void) line_c;
	printf("%d\n", (*stack)->n);
}
