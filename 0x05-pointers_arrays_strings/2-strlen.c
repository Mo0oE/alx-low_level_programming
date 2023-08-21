#include "main.h"

/**
 * -strlen - function
 *  @s: string
 *  Description: None
*/

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
