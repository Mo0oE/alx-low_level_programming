#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * _puts_recursion - fu
 * @s: in
 * Description: none
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\0');
		_putchar ('\n');
	}
}
