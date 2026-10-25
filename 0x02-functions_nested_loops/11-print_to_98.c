/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints natural numbers from n to 98.
 */
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
