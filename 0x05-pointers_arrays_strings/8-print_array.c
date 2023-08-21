#include "main.h"

/**
 * print_array - function
 * @a: input
 * @n: input
 * Description: None
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%i", a[i]);
	}
	printf("\n");
}
