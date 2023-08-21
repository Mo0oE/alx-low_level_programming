#include "main.h"

/**
 * rev_string - function
 * @s: string
 * Description: None
*/

void rev_string(char *s)
{
	int i = 0, y = 0, z;
	char tmp;

	while (s[i] != '\0')
		i++;
	i--;
	z = i / 2;
	for (; i >= z; i--)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y] = tmp;
		y++;
	}
}
