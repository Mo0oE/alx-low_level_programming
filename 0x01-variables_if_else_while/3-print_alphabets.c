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
	char c = 'a', C = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');


	return (0);
}
