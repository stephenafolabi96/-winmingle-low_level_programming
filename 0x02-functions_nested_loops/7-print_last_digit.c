/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the last digit of a number.
 */
#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: The number
 *
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');
	return (last);
}
