/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Sum of even Fibonacci numbers under 4,000,000.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int t1 = 1, t2 = 2, nextTerm = 0, sum = 2;

	while (nextTerm <= 4000000)
	{
		nextTerm = t1 + t2;
		if (nextTerm % 2 == 0 && nextTerm <= 4000000)
			sum += nextTerm;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%lu\n", sum);
	return (0);
}
