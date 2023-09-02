#include <stdio.h>
#include <stdlib.h>

/**
 * main - fu
 * @argc: in
 * @argv: arr
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;
	char *check;

	for (; i < argc; i++)
	{
		for (check = argv[i]; *check; check++)
			if (*check > '9' || *check < '0')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
