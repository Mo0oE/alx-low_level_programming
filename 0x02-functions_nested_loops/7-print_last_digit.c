#include "main.h"

/**
 * print_last_digit - function
 * @n: input
 * Return: 0
*/

int print_last_digit(int n)
{
	int n1;

	if (n < 0)
		n *= -1;

	n1 = n % 10;

	_putchar ('0' + n1);
	return (n1);
}
