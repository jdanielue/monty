#include "monty.h"

/**
 * fun_empty_spaces - function checks empty or blank spaces.
 * @my_buffer: pointer  to the buffer
 * Return: 0 if empty or white spaces.
 */
int fun_empty_spaces(char *my_buffer)
{
	int i;

	for (i = 0; my_buffer[i] != '\n'; i++)
	{
		if (my_buffer[i] != ' ')
			return (1);
	}
	if (my_buffer[0] != '\n')
		return (0);
	return (0);
}
