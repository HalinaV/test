#include <stdio.h>

/**
 *main - printing alphabet in lowercase
 *
 *Return: return 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
