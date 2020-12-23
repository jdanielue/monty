#include "monty.h"
/**
 * search_function - search function to execute
 * @stack: Pointer to top of stack
 * @line_c: Line count
 *
 * Description: search function to execute
 */


void search_function(unsigned int line_c, stack_t **stack)
{
	instruction_t funcion[] = {
		{"push", fun_push},
		{"pall", fun_pall},
		{"pint", fun_pint},
		{"swap", fun_swap},
		{"add", fun_add},
		{"nop", fun_nop},
		{"pop", fun_pop},
		{"sub", fun_sub},
		{"div", fun_div},
		{"mul", fun_mul},
		{NULL, NULL}
	};
	int i = 0, comp;

	while (funcion[i].opcode != NULL)
	{
		comp = strcmp(funcion[i].opcode, command[0]);
		if (comp == 0)
		{
			funcion[i].f(stack, line_c);
			break;
		}

		i++;
	}

	if (i == 8)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_c, command[0]);
		exit(EXIT_FAILURE);
	}

}
