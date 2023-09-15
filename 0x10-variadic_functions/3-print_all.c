#include "variadic_functions.h"

/**
 * printint - fu
 * @s: in
 * @args: in
 * Description: none
*/

void printint (char *s, va_list args)
{
	printf("%s%d", s, va_arg(args, int));
}

/**
 * printfloat - fu
 * @s: in
 * @args: in
 * Description: none
*/

void printfloat (char *s, va_list args)
{
	printf("%s%f", s, va_arg(args, double));
}

/**
 * printchar - fu
 * @s: in
 * @args: in
 * Description: none
*/

void printchar (char *s, va_list args)
{
	printf("%s%c", s, va_arg(args, int));
}

/**
 * printstring - fu
 * @s: in
 * @args: in
 * Descrtiption: none
*/

void printstring(char *s, va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", s, str);
}

/**
 * print_all - fu
 * @format: in
 * @...: ins
 * Description: none
*/

void print_all(const char * const format, ...)
{
	int size = strlen(format), i = 0, j;
	va_list args;
	char *chk = "ifcs";
	char *sep = "";

	void (*fu[])() = {printint, printfloat, printchar, printstring};

	va_start(args, format);
	while (i < size && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == chk[j])
			{
				fu[j](sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

