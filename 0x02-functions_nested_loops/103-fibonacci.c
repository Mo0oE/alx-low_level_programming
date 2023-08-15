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
	unsigned long int nums[50], sum = 0;

	nums[0] = 1;
	nums[1] = 2;

	printf("%lu, %lu", nums[0], nums[1]);

	for (; i < 50; i++)
	{
		nums[i] = nums[i - 2] + nums[i - 1];
		if (nums[i] > 4000000)
			break;
		if (nums[i] % 2 == 0)
			sum += nums[i];
	}
	printf("%lu\n", sum);
	return (0);
}
