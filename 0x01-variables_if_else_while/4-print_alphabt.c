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
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');


	return (0);
}
