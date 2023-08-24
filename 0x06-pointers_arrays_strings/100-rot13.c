#include "main.h"

/**
 * rot13 - function
 * @str: input
 * Description: None
 * Return: None
 */

char *rot13(char *str)
{
	char c[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char n[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int i = 0, y;

	while (str[i])
	{
		for (y = 0; y < 52; y++)
		{
			if (str[i] == c[y])
				str[i] = n[y];
			break;
		}
		i++;
	}
	return (str);
}
