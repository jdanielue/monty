#include "monty.h"

/**
 * main - monty interpreter
 * @argc: unnused attribute
 * @argv: file .m
 *
 * Description: monty interpreter
 */


int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char line[50];
	int comp, comp2;
	const char *delim;
	unsigned int line_c = 1;
	int i = 0, flag = 0, length;
	char *str = (char *)malloc(sizeof(char));
	char *temp = (char *)malloc(sizeof(char));
	char *temp2 = (char *)malloc(sizeof(char));

	command = (char **)malloc(32 * sizeof(char *));

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	delim = " ";
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, 255, fp))
	{
		comp = strcmp(line, "\n");
		str = strtok(line, delim);
		while (str != NULL && !(comp == 0) && i <= 1)
		{
			temp = str;
			length = strlen(temp);
			temp2 = &temp[length - 1];
			comp2 = strcmp(temp2, "\n");
			if (comp2 == 0)
				str[length - 1] = '\0';
			command[i] = str;
			i++;
			str = strtok(NULL, delim);
			flag = 1;
		}
		if (flag == 1)
			search_function(line_c, &stack);
		flag = 0;
		i = 0;
		line_c++;
	}
	i = 0;
	fclose(fp);
	return (0);
}
