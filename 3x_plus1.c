#include <stdio.h>

int threexplusone(int x)
{
	if (x == 1)
		return (0);

	if (x % 2 == 0)
	{

		return (threexplusone(x / 2) + 1);
	}
	else
	{

		return (threexplusone(3 * x + 1) + 1);
	}
}

int main (void)
{
	int i;

	printf("Solutions for 3x + 1, numbers 1-100\n");

	for (i = 1; i <= 100; i++)
	{
		printf("%d: %d\n", i, threexplusone(i));
	}
	return;
}
