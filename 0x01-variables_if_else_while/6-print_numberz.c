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
	int c = 0;

	for (; c <= 9; c++)
	{
		putchar(tochar(c));
	}
	putchar('\n');


	return (0);
}
