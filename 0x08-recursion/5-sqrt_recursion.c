#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - fu
 * @n: in
 * @y: in
 * Return: none
*/

int sqrot(int n, int y);
int _sqrt_recursion(int n)
{
	return (sqrot(n, 1));
}

/**
 * sqrot - fun
 * @n: in
 * @y: in
 * Return: ninie
*/

int sqrot(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (sqrot(n, y + 1));
	else
		return (-1);
}
