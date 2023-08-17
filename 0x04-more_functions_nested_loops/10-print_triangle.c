#include "main.h"

/**
 * print_triangle - function
 * @size: input
 * Description
*/

void print_triangle(int size)
{
	int i, y;

	for (i = 1; i <= size; i++)
	{
		for (y = size ; y > i; y--)
			_putchar (' ');
		for (y = 0; y < i; y++)
			_putchar ('#');
		_putchar ('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
