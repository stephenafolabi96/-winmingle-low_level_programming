/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the sign of a number.
 */
#include "main.h"

/**
 * print_sign - Prints sign of a number and returns status
 * @n: The number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
