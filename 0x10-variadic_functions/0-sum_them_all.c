#include "variadic_functions.h"

/**
 * sum_them_all - fu
 * @n: in
 * @...: ins
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	for (; i; i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
