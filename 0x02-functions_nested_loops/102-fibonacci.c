#include <stdio.h>

/**
 * main - start
 * Description: None
 * Return: 0
*/

int main(void)
{
	int i, count = 0;

	for (i = 0; i < 1000000; i++)
	{
		if (i == 1 || i == 2 || i / 10 == 1 || i / 10 == 2 || i / 100 == 1 || i / 100 == 2 || i / 1000 == 1 || i / 1000 == 2 || i / 10000 == 1 || i / 10000 == 2)
		{
			count++;
			printf("%i", i);
		}
		if (count == 50)
			break;
		printf(", ");
	}
	printf('\n');
	return (0);
}
