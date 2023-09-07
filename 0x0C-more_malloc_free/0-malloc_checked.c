#include "main.h"

/***/

void *malloc_checked(unsigned int b)
{
	malloc(b);
	if (b == NULL)
		exit(98);
}
