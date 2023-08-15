#include "main.h"

/**
 * print_alphabet - A function
 *
 * Return: 0
*/

void print_alphabet(void)
{
	int ch=0;

	for (; ch < 26; ch++)
		_putchar ('a' + ch);
	_putchar ('\n');
}
