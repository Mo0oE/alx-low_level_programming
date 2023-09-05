#include "main.h"

/**
 * argstostr - fu
 * @ac: in
 * @av: in
 * Return: pointer
*/

char *argstostr(int ac, char **av)
{
	int i = 0, y = 0, t = 0, size = 0;
	char *str;

	if (ac == 0 || !av)
		return (NULL);

	for (; i < ac; i++, size ++)
		size += strlen(av[i]);

	str = malloc(size + 1);

	if (!str)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			str[t] = av[i][y];
			t++;
		}
		str[t] = '\n';
		t++;
	}
	return (str);
}
