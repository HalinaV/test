#include "shell.h"

/**
 * main - structure for the simple shell that prompts user to input command
 */

int main(void)
{
	char *input, *result;
	char **command;
	size_t bufsize = 0;
/*	size_t character_count; */

	input = NULL;
	command = malloc(100 * sizeof(char *));
	if( command == NULL)
	{
		free(command);
		exit(1);
	}
	write(STDOUT_FILENO, "$ ", 2);
/*	character_count = getline(&input, &bufsize, stdin); */
	if (getline(&input, &bufsize, stdin) == EOF)
	{
		free(bufsize);
		exit(1);
	}
	else if (input[0] != '\n')
	{
		printf("i am inside the env loop\n");
		command = tokenizer(input);
		result = path_split(command);
		execute(result);
		write(STDOUT_FILENO, "$ ", 2);
	}
	else
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	free(input);
	free(command);
	free(bufsize);
	return(0);
}
