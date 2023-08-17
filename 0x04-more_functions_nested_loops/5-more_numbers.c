#include "main.h"

/**
 * more_numbers - function
 * Description: None
*/

void print_numbers(void)
{
	int i;

	for (y = 0; y < 10; y++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar ('0' + i);
		}
		_putchar ('\n');
	}
}
