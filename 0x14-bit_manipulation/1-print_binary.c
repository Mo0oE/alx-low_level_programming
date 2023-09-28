#include "main.h"

/**
 * print_binary - fu
 * @n: in
 * Description: none
 */

void print_binary(unsigned long int n)
{
	int printed = 0, nums = sizeof(n) * 8;

	while (nums)
	{
		if (n & 1l << --nums)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
