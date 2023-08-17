#include "main.h"

/**
 * print_diagonal - function
 * @n: input
 * Description: None
*/

void print_diagonal(int n)
{
	int i, y;

	for (i = 0; i < n; i++)
	{
		for (y = 0; y < i; y++)
			_putchar (' ');

		_putchar ('\\');
		_putchar ('\n');
	}
	
}
