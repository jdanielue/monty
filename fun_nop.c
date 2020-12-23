#include "monty.h"
/**
 * fun_nop - function that does nothing1
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: function that does nothing
 */

void fun_nop(stack_t **stack, unsigned int line_c)
{
	if (*(stack) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_c);
		exit(EXIT_FAILURE);
	}
}
