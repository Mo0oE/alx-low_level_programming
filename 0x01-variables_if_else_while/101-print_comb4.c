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
	int c = 0, c2, c3;

	for (; c <= 7; c++)
	{
		for (c2 = c + 1; c2 <= 8; c2++)
		{
			for (c3 = c2 + 1; c3 <= 9; c3++)
			{
				putchar(c + '0');
				putchar(c2 + '0');
				putchar(c3 + '0');
				if (c == 7 && c2 == 8 && c3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
