/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints all base 16 numbers in lowercase using putchar.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char hex = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
