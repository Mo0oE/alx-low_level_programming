#include "main.h"
#include <math.h>

/**
 * _atoi - function
 * @s: input
 * Description: Nime
 * Return: not
*/

int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int y = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			y = (y * 10) + (s[i] - 48);
		else if (y)
			break;
	}
	return (sign * y);
}
