#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - the function to print!
 * @str: the input of putchar
 * Return: On success 1 and On error -1
 *
*/


int _putchar(char str)
{
	return (write(1, &str, 1));
}
