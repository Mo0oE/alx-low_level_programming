#include "main.h"

/**
 * str_concat - fu
 * @s1: in
 * @s2: in
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int si1, si2,size, i = 0;
	char *str;

	if (!s1 && !s2)
		return (NULL);
	si1 = strlen(s1);
	si2 = strlen(s2);
	size = si1 + si2;
	str = (char *) malloc(size + 1);

	for (; i < size; i++)
	{
		if (i < si1)
			str[i] = s1[i];
		else
			str[i] = s2[i];
	}
	str[size] ='\0';
	return (str);
}
