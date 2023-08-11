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

	for (int i = 0; i < 26; i++)
	{
		putchar(c);
		putchar('\n');
		c++;
	}


	return (0);
}
