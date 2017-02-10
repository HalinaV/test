#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - printing last digit of random number and text
 *
 *main function - generate random number, find last digit and if it is more
 *than 5 -print that it is greater than 5; if it is equals 0 - print it is 0;
 *if it is 5 or less - print "is less than 6 and not 0
 *
 *Return: return 0
 */

int main(void)
{
	long n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;
	if (LastDigit > 5)
	{
		printf("Last digit of %ld is %d and is greater than 5\n", n,
		       LastDigit);
	}
	else if (LastDigit == 0)
	{
		printf("Last digit of %ld is %d and is 0\n", n,
		LastDigit);
	}
	else
	{
		printf("Last digit of %ld is %d and is less than 6 and not 0\n",
		       n, LastDigit);
	}

	return (0);
}
