#include "main.h"

/**
 * print_times_table - function
 * @n: input
 * Return: None
*/

void print_times_table(int n)
{
	int c, r = 0, res = 0;

	if (n > 15 || n < 0)
		return;
	for (; r <= n; r++)
	{
		_putchar ('0');
		for (c = 1; c <= n; c++)
		{
			res = c  * r;
			if (res < 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + res);
			}
			else if (res < 100)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + (res / 10));
				_putchar ('0' + (res % 10));
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + (res / 100));
				_putchar ('0' + ((res % 100) / 10));
				_putchar ('0' + (res % 10));
			}
		}
		_putchar ('\n');
	}
}
