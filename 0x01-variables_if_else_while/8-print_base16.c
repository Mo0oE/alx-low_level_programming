#include<stdio.h>

/**
 * main - start
 *
 * Description: None
 *
 * Return: 0
*/

int main(void)
{
	char c = '0', c6 = 'a';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	for (; c6 <= 'f'; c6++)
	{
		putchar(c6);
	}
	putchar('\n');


	return (0);
}
