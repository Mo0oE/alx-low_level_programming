#include "main.h"

/**
 * leet - function
 * @str: input
 * Description: None
 * Return: Nkone
*/

char *leet(char *str)
{
	char *c = {'A', 'E', 'O', 'T', 'L'};
	char *n = {'4', '3', '0', '7', '1'};
	int i = 0, y = 0;

	while (str[i])
	{
		for (; y < 5; y++)
		{
			if (str[i] == c[y] || str[i] == c[y] + 32)
				str[i] = n[y];
		}
	}
	return (str);
}
