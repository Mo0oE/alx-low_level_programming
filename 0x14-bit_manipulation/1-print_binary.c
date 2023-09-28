#include "main.h"

/**
 * print_binary - fu
 * @n: in
 * Description: none
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary(n / 2);
	_putchar('0' + (n % 2));
}
