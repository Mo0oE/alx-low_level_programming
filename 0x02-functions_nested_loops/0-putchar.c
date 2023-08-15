#include <stdio.h>
#include "main.h"

/**
 * main - the start
 *
 * Description: Nine
 *
 * Return: 0 mostly
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar ('\n');
	return (0);
}
