#include "main.h"

/**
 * swap_int - function
 * @a: input
 * @b: input
 * Desciption: None
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
