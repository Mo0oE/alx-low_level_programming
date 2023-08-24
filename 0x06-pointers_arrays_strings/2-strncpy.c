#include "main.h"

/**
 * _strncpy - function
 * @dest: input
 * @src:input
 * @n: input
 * Description: none
 * Return: smtg
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
		dest[i++] = '\0';

	return (dest);
}
