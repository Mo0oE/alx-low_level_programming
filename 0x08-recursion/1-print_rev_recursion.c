#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * _print_rev_recursion - fu
 * @s: in
 * Description: none
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
