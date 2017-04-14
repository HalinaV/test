#include "shell.h"

/**
 * tokenizer - function to allocate space for tokens and tokanize user input
 * @input: user input
 * Return: tokens or 1 if failed to alocate memory
 */

char **tokenizer(char *input)
{
	int buffsize = 800, i = 0;
	char **tokens;

	tokens = malloc(buffsize * sizeof(char *));
	if (tokens == NULL)
		exit(1);
	tokens[i] = strtok(input,"\n ");
	while (tokens[i] != NULL)
	{
		printf("Token: %s\n",tokens[i]);
		i++;
		tokens[i] = strtok(NULL, "\n ");
	}
/*	free(*tokens);*/
	return (tokens);
}
