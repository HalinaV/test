#include <stdio.h>
#include <unistd.h>

/**
 * main - return child and parent PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, my_parent_pid;

	my_pid = getpid();
	printf("current process ID: %u\n", my_pid);
	my_parent_pid = getppid();
	printf("parent process ID: %u\n", my_parent_pid);
	return (0);
}
