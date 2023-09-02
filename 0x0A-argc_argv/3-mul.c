#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - fu
 * @argc: in
 * @argv: arr
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]), b = atoi(argv[2]);

		printf("%d\n", a + b);
		return (0);
	}
}
