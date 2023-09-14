#include "variadic_functions.h"

/**
 * print_strings - fu
 * @separator: in
 * @n: in
 * @...: ins
 * Description: none
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *tmp;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	tmp = va_arg(args, char *);

	while (i--)
	{
		printf("%s%s", tmp ? tmp : "(nil)", i ? (separator ? separator : "") : "\n");
		tmp = va_arg(args, char *);
	}
}
