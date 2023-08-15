#include <stdio.h>
#include <stdint.h>

/**
 * main - start
 * Description: None
 * Return: 0
*/

int main(void)
{
	int i = 2;
	unsigned long int nums[98];

	nums[0] = 1;
	nums[1] = 2;

	printf("%lu, %lu", nums[0], nums[1]);

	for (; i < 98; i++)
	{
		nums[i] = nums[i - 2] + nums[i - 1];
		printf(", %lu", nums[i]);
	}
	printf("\n");
	return (0);
}
