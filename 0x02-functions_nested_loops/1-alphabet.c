#include "main.c"

/**
 * print_alphabet - A function
 *
 * Return: 0
*/

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		_putchar (ch);
	_putchar ('\n');
	return (0);
}
