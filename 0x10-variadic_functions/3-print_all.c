#include "variadic_functions.h"

/***/

void print_all(const char * const format, ...)
{
	int size = strlen(format), i = 0;
	va_list args;
	char c;
	char *chk = "ifcs";
	void (*fu[])();
	
	va_start(args, format);
	while (i < size)
	{
		
	}
}
