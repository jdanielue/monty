#include "monty.h"
/**
 * fun_sub - function that substracts the top element
 * from the second top element
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: function that substracts the top element
 * from the second top element
 */

void fun_sub(stack_t **stack, unsigned int line_c)
{
	stack_t *temp1, *temp2;
	int sub;

	temp1 = malloc(sizeof(stack_t));
	temp2 = malloc(sizeof(stack_t));
	temp1 = *stack;
	temp2 = (*stack)->next;
	sub = temp2->n - temp1->n;
	printf("%d\n", sub);
	*stack = temp2->next;
}