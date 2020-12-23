#include "monty.h"
/**
 * fun_swap - swaps the two top nodes of the stack
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: swaps the two top nodes of the stack
 */

void fun_swap(stack_t **stack, unsigned int line_c)
{
	stack_t *temp1, *temp2;

	temp1 = malloc(sizeof(stack_t));
	temp2 = malloc(sizeof(stack_t));
	temp1 = *stack;
	temp2 = (*stack)->next;
	temp1->next = temp2->next;
	temp2->prev = NULL;
	temp2->next = temp1;
	*stack = temp2;
}
