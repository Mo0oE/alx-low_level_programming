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
	unsigned int i = 0;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (; i < n - 1; i++)
		if (separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	printf("%d\n", va_arg(args, int));
}
