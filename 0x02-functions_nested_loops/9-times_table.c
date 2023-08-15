#include "main.h"

/**
 * times_table - function
 *
 * Return: None
*/

void times_table(void)
{
	int c, r = 0, res = 0;

	for (; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			res = c  * r;

			if (res < 10)
			{
				if (r != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar ('0' + res);
			}
			else
			{
				if (r != 0)
				{
					_putchar (',');
					_putchar (' ');
				}
				_putchar ('0' + (res / 10));
				_putchar ('0' + (res % 10));
			}



		}


	}



}
