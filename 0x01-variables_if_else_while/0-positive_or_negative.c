#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - start
 *
 * Description: none
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
