#include "main.h"

/**
 * print_last_digit - function
 * @n: input
 * Return: 0
*/

int print_last_digit(int n)
{
	int naps, n1;

	naps = _abs(n);
	n1 = naps % 10;

	_putchar ('0' + n1);
	return (n1);
}
