#include "main.h"

/**
 * reverse_array - function
 * @a: input
 * @n: input
 * Description: None
 * Return: None
*/

void reverse_array(int *a, int n)
{
	int i = 0, c = n - 1, tmp;

	for (; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[c - i];
		a[c - i] = tmp;
	}
}
