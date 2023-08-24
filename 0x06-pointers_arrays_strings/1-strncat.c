#include "main.h"

/**
 * _strncat - function
 * @dest: input
 * @src:input
 * @n: input
 * Description: none
 * Return: smtg
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, y = 0;

	while (dest[i] != '\0')
		i++;
	while (y < n && src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
