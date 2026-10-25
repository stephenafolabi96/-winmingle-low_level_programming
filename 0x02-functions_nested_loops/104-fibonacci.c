/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints first 98 Fibonacci numbers using split arithmetic.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int l1 = 0, l2 = 0;
	unsigned long int h1 = 1, h2 = 2;
	unsigned long int sum_l, sum_h;
	unsigned long int limit = 1000000000;

	printf("1, 2");
	for (i = 3; i <= 98; i++)
	{
		sum_l = l1 + l2;
		sum_h = h1 + h2;
		if (sum_l >= limit)
		{
			sum_h += sum_l / limit;
			sum_l %= limit;
		}
		printf(", ");
		if (sum_h != 0)
			printf("%lu", sum_h);
		printf("%09lu", sum_l);
		l1 = l2;
		l2 = sum_l;
		h1 = h2;
		h2 = sum_h;
	}
	printf("\n");
	return (0);
}
