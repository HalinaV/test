#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print the number and if it is positive, negative or 0
 *
 *main will take a random number, and print number followed by "is positive" if
 *number is more than 0; print "is zero" if number = 0; print "is negative" if
 *number is less than 0
 *
 *Return: will return 0
 */

int main(void)
{
	long n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ld is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%ld is zero\n", n);
	}
	else
	{
		printf("%ld is negative\n", n);
	}

	return (0);
}
