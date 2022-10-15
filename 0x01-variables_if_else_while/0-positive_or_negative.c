#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Prints a random number and states weather it is positive, negative, or zero
 *
 * return: always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = random() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
