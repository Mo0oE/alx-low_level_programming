#include "main.h"

/**
 * more_numbers - function
 * Description: None
*/

void more_numbers(void)
{
	int i, y;

	for (y = 0; y < 10; y++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar ('1');
			_putchar ('0' + i % 10);
		}
		_putchar ('\n');
	}
}
