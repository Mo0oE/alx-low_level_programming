#include "main.h"

/**
 * print_number - function
 * @n: input
 * Description: None
*/

void print_number(int n)
{
	int n1, c, x;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	n1 = n;
	c = 0;

	while (n1 > 0)
	{
		n1 /= 10;
		c++;
	}

	for (; c >= 1; c--)
	{
		x = n / (10 ^ c);
		_putchar('0' + x);
		n = n % (10 ^ c);
	}
}
