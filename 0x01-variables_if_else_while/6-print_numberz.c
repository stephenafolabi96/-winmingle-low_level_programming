/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints numbers 0-9 using putchar without char variables.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48; /* ASCII value for '0' */

	while (num <= 57) /* ASCII value for '9' */
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
