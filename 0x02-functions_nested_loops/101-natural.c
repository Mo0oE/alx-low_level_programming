#include <stdio.h>

/**
 * main - start
 * Description: None
 * Return: 0
*/

int main(void)
{
	int sum = 0, i = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}