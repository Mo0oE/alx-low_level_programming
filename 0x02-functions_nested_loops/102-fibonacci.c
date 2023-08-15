#include <stdio.h>

/**
 * main - start
 * Description: None
 * Return: 0
*/

int main(void)
{
	int i = 2, nums[50];

	nums[0] = 1;
	nums[1] = 2;

	printf("%i, %i", nums[0], nums[1]);

	for (; i < 50; i++)
	{
		nums[i] = nums[i - 2] + nums[i - 1];
		printf(", %i", nums[i]);
	}
	printf("\n");
	return (0);
}
