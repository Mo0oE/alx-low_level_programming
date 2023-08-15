#include "main.h"

/**
 * print_alphabet - A function
 *
 * Return: 0
*/

void print_alphabet(void)
{
	int ch, i = 0;

	for (;i < 10; i++)
	{
		for (ch = 0; ch < 26; ch++)
			_putchar ('a' + ch);
		_putchar ('\n');
	}
}
