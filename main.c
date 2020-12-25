#include "monty.h"

/**
 * main - monty interpreter
 * @argc: unnused attribute
 * @argv: file .m
 *
 * Description: monty interpreter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char line[50];
	int comp, comp2;
	const char *delim = " ";
	unsigned int line_c = 1;
	int i = 0, flag = 0;
	char *str;

	command = (char **)malloc(32 * sizeof(char *));
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, 255, fp))
	{
		comp = strcmp(line, "\n");
		str = strtok(line, delim);
		while (str != NULL && !(comp == 0) && i <= 1)
		{

			comp2 = strcmp(&str[strlen(str) - 1], "\n");
			if (comp2 == 0)
				str[strlen(str) - 1] = '\0';
			command[i] = str, i++, flag = 1;
			str = strtok(NULL, delim);
		}
		if (flag == 1)
			search_function(line_c, &stack);
		flag = 0, i = 0, line_c++;
	}
	fclose(fp);
	node_free(stack);
	free(command);
	return (0);
}
