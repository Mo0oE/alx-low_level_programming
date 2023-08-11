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
	int c, c1;

	for (c = 0; c <= 98; c++)
	{
		for (c1 = c + 1 ; c1 <= 99; c1++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(' ');
			putchar('0' + c1 / 10);
			putchar('0' + c1 % 10);
			if (c == 98 && c1 == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
