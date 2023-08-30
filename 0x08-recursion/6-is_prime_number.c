#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - fu
 * @n: in
 * @y: in
 * Return: nonw
*/

int isprime(int n, int y);
int is_prime_number(int n)
{
	return (isprime(n, 2));
}

/**
 * isprime - fu
 * @n: in
 * @y: in
 * Return: none
*/

int isprime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (isprime(n, y + 1));
}
