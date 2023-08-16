#include <stdio.h>
#include <stdint.h>

/**
 * main - start
 * Description: None
 * Return: 0
 */

int main(void)
{
	unsigned long int n, n_h1, n_h2, n1 = 1, n2 = 2, n1_h1, n1_h2, n2_h1, n2_h2;
	int i;

	printf("%lu, %lu", n1, n2);
	for (i = 2; i < 88; i++)
	{
		n = n1 + n2;
		printf(", %lu", n);
		n1 = n2;
		n2 = n;
	}
	n1_h1 = n1 / 100000000000;
	n2_h1 = n2 / 100000000000;
	n1_h2 = n1 % 100000000000;
	n2_h2 = n2 % 100000000000;
	for (i = 88; i < 98; i++)
	{
		n_h1 = n1_h1 + n2_h1;
		n_h2 = n1_h2 + n2_h2;
		if (n_h2 >= 100000000000)
		{
			n_h1++;
			n_h2 = n_h2 % 100000000000;
		}
		if (n_h2 % 10000000000 == 0)
		{
			printf(", %lu0%lu", n_h1, n_h2);
		}
		else
		{
			printf(", %lu%lu", n_h1, n_h2);
		}
		n1_h1 = n2_h1;
		n1_h2 = n2_h2;
		n2_h1 = n_h1;
		n2_h2 = n_h2;
	}
	putchar('\n');
	return (0);
}
