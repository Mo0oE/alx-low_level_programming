#include "main.h"

/**
 * jack_bauer - function
 *
 * Return: None
*/

void jack_bauer(void)
{
	int min, hr = 0;

	for (; hr < 24; hr++)
	{

		for (min = 0; min < 60; min++)
		{
			_putchar ('0' + (hr / 10));
			_putchar ('0' + (hr % 10));
			_putchar (':');
			_putchar ('0' + (min / 10));
			_putchar ('0' + (min % 10));
			_putchar ('\n');
		}

	}

}
