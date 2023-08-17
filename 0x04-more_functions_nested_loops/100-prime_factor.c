#include <stdio.h>
#include <math.h>

/**
 * main - function
 * Description: None
 * Return: 0
*/

int main(void)
{
	unsigned long i = 3, lar = 0, num = 612852475143;

	for (; (i * i) <= num; i += 2)
	{
		if (num % i == 0)
		{
			lar = i;
			while (num % i == 0)
				num /= i;
		}
	}
	if (num > 1)
		lar = num;
	printf("%lu\n", lar);
	return (0);
}
