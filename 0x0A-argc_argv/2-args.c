#include <stdio.h>

/**
 * main - fu
 * @argc: in
 * @argv: arr
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1;

	for(; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
