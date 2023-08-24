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
	char *sep = " \n \t , . ! ? ; \" ( ) { } ";

	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - function
 * @s: input
 * Description: Nine
 * Return: None
*/

char *cap_string(char *s)
{
	char *str = s;
	int i = 0, c = 1;

	while (str[i])
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
		i++;
	}
	return (str);
}
