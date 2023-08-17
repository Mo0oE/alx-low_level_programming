#include "main.h"

/**
 * print_square - function
 * @size: input
 * Description: None
*/

void print_square(int size)
{
	int i, y;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
