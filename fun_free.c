#include "monty.h"

/**
 * special_free - monty interpreter
 * @cartman: double_pointer
 *
 * Return: nothing
 */

void special_free(char **cartman)
{
	int position;

	for (position = 0; cartman[position] != NULL; position++)
	{
		free(cartman[position]);
	}
	free(cartman);
}

/**
 * node_free - monty interpreter
 * @top: top_pointer
 *
 * Return: nothing
 */

void node_free(stack_t *top)
{
	stack_t *temp;

	temp = top;
	while (temp)
	{
		temp = top->next;
		free(top);
		top = temp;
	}

}