#include "main.h"

/**
 * print_to_98 - function
 * @n: input
 * Return: None
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 9)
			_putchar ('0' + (i / 10));

		_putchar ('0' + (i % 10));

		if (i != 98)
		{
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
