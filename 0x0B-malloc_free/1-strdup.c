#include "main.h"

/**
 * _strdup - fu
 * @str: in
 * Return: pointer
*/

char *_strdup(char *str)
{
	int size = strlen(str), i = 0;
	char *str2 = (char *) malloc(size + 1);

	if (str == NULL || str2 == NULL)
		return (NULL);
	while (i < size)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
