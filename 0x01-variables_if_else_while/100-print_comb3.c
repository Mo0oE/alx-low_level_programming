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
	int c = 0, c2;

	for (; c <= 9; c++)
	{
		for (c2 = c + 1; c2 <= 9; c2++)
		{
			putchar(c + '0');
			putchar(c2 + '0');
			if (c != 8 && c2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
