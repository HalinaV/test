#include "shell.h"

char *_getenv_val(const char *name)
{
	int i, strcompare;
	char *env;
	i = 0;
	int length;

	if (name != NULL || name[0] != '\0')
	{
	while (environ[i] != NULL)
	{
		length = _strlen((char *)name);
		strcompare = _strcmp((char *)name, environ[i], length);
		
		if (strcompare == 0)
		{
			env = strtok(environ[i], "=");
			env = strtok(NULL, "\n ");
			write(STDOUT_FILENO, env, _strlen(env));
			return (env);
		}
		i++;
	}
	}
	return (NULL);
}
/*
void main(void)
{
	_getenv_val("PATH");
}
*/
