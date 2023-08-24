#include "main.h"

/**
 * issep - function
 * @c: input
 * Description: None
 * Return: None
*/

int issep(char c)
{
	int i = 0;
	char *sep = " \n\t,.!?;\"(){}";

	for (; i != '\0'; i++)
		if (c == sep[i])
			return (1);
	return (0);
}

/**
 * cap_string - function
 * @str: input
 * Description: Nine
 * Return: None
*/

char *cap_string(char *s)
{
	char *str = s;
	int i = 0, c = 1;

	for (; i != '\0'; i++)
	{
		if (issep(str[i]))
			c = 1;
		else if (c && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			c = 0;
		}
		else
			c = 0;
	}
	return (str);
}
