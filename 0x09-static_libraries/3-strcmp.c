#include "main.h"

/**
 * _strcmp - function
 * @s1: input
 * @s2: input
 * Description: Noen
 * Return: None
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (s1[i] && (s1[i] == s2[i]))
		i++;
	c = s1[i] - s2[i];
	return (c);
}
