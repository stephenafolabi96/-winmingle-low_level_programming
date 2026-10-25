/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Computes absolute value of an integer.
 */
#include "main.h"

/**
 * _abs - Computes absolute value
 * @n: The integer
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
