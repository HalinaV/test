#include<stdio.h>

/**
 *main - print numbers 0 to 9 with putchar
 *
 *Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	printf("\n");

	return (0);
}
