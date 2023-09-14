#include "variadic_functions.h"

/**
 * print_numbers - fu
 * @separator: in
 * @n: in
 * @...: ins
 * Description: none
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list args;

	va_start(args, n);
	for (; i < n - 2; i++)
		printf("%d%s", va_arg(args, int), seperator);
	printf("%d\n", va_arg(args, int));
}
