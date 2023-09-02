#include <stdio.h>
#include <stdlib.h>

/**
 * main - fu
 * @argc: in
 * @argv: cha
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int cents, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents > 0)
		{
			sum += cents / 25;
			cents %= 25;
			sum += cents / 10;
			cents %= 10;
			sum += cents / 5;
			cents %= 5;
			sum += cents / 2;
			cents %= 2;
			sum += cents;
		}
		printf("%d\n", sum);
		return (0);
	}
}
