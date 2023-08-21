#include "main.h"

/**
 * _strlen - function
 *  @s: string
 *  Description: None
 *  Return: Number
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
