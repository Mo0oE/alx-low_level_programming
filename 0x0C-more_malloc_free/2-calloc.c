#include "main.h"

/**
 * _calloc - fu
 * @nmemb: in
 * @size: in
 * Return: none
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *tmp;
	char c;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);
	tmp = arr;
	n = nmemb * sizeof(int);
	c = 0;
	while (n--)
	{
		*tmp++ = c;
	}
	return (arr);
}
