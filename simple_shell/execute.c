#include "shell.h"

/*
 * file to create child process, execute env if found
 */

void execute(char **input)
{
	pid_t child;
	int status, execute;

	child = fork();
	if (child < 0)
	{
		perror("Error creating child process");
		free(input);
		exit(0);
	}
	if (child == 0)
	{
		execute = execve(input[0], input, environ);
		if(execute == -1)
		{
			write(STDOUT_FILENO, "Command does not exist", 22);
			free(input);
			exit(1);
		}
	}
	else
		wait(&status);
}
/*
void main(void)
{
	
execute("/bin/ls");
}
*/
