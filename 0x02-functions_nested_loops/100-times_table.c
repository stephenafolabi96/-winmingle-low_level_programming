/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints n times table up to 15.
 */
#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Maximum multiplier (0 to 15)
 */
void print_times_table(int n)
{
	int row, col, prod;

	if (n < 0 || n > 15)
		return;

	row = 0;
	while (row <= n)
	{
		col = 0;
		while (col <= n)
		{
			prod = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod < 100)
				{
					_putchar(' ');
				}
			}
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
