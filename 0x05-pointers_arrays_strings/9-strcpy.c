#include "main.h"

/**
 * _strcpy - function
 * @dest: input
 * @src: input
 * Description: None
 * Return: Not ur damn businesse 
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
