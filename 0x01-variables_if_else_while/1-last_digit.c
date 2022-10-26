#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0 if no error, non-zero value if error
 */
int main(void)
{
	int n;
	int X;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10
		printf("Last digit of %d is %d", n, X);
	if (X > 5)
	{
		printf("and is greater than 5");
	}
	if (X == 0)
	{
		printf("and is 0");
	}
	if (X < 6 && X != 0)
	{
		printf("and is less than 6 and not 0);
	}
	printf("\n");
	return (0)
}
