#include "shell.h"

/**
 * function that checks if the enviromental exist
 */

int match(char **command)
{
	struct stat buf;

	if (stat(command, &buf) == 0)
		return (0);
	else
		return (1);
	return (0);
}
