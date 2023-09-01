#include "main.h"

/**
 * _strcat - function
 * @dest: input
 * @src:input
 * Description: none
 * Return: smtg
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, y = 0;

	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	return (dest);
}
