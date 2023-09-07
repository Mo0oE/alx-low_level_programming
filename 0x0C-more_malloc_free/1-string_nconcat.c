#include "main.h"

/**
 * string_nconcat - fu
 * @s1: in
 * @s2: in
 * @n: in
 * Return: Nnon
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size, size2, i, y = 0;
	char *str;

	if (s1)
		size1 = strlen(s1);
	else
		size1 = 0;
	if (s2)
		size2 = strlen(s2);
	else
		size2 = 0;
	size = size1 + size2;

	if (size > (size1 + n))
		size = size1 + n;

	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1 ; i++)
	{
		str[y] = s1[i];
		y++;
	}
	for (i = 0; i < (size - size1); i++)
	{
		str[y] = s2[i];
		y++;
	}
	str[y] = '\0';
	return (str);
}

