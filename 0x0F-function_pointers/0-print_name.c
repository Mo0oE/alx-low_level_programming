#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - fu
 * @name: in
 * @f: in fu
 * Description: none
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
