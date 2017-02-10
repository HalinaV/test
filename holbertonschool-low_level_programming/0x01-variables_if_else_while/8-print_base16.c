#include<stdio.h>

/**
 *main - write all numbers of base 16, lowercase, followed by new line
 *
 *Return: 0
 */

int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
