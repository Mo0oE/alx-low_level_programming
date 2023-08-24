#include "main.h"
#include <unistd.h>

/**
 * _putchar - function
 * @c: input
 * Return: None
*/

int _putchar (char c)
{
	return (write(1, &c, 1));
}
