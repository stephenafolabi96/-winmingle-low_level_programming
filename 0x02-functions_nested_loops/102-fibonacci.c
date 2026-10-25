/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints first 50 Fibonacci numbers.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		printf("%ld", t1);
		if (i != 50)
			printf(", ");
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
