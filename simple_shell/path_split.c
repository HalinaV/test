#include "shell.h"

/**
 *
 */

char *path_split(char *input)
{
	char *path_val, *path_dir;
	char *slash, *token_cpy, *result, *path_copy;
	int i;

	path_val = _getenv_val("PATH");

/*get the length of the PATH value */
	for (i = 0; path_val[i] !='\0'; i++)
		;
	path_copy = malloc(i * sizeof(char));
	if (path_copy == NULL)
		exit(1);
	_strcpy(path_copy, path_val);
	path_dir = strtok(path_copy, ":");
	free(path_copy);

	while (path_dir != NULL)
	{
		token_cpy = _strdup(path_dir);
		slash = _strncat(token_cpy, "/");
		result = _strncat(slash, input);
		printf("result: %s\n", result);
/*
		if(_exex(result) == 0)
		return (result);
*/
		path_dir = strtok(NULL, ":");
	}
/*free(*tokens);*/
	return (NULL);
}
/*
void main(void)
{
	path_split("ls");
}
*/
