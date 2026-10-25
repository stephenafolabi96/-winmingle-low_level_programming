/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the 9 times table starting with 0.
 */
#include "main.h"
/**
 * times_table - Prints 9 times table
 */
void times_table(void)
{
	int row = 0, col, prod;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			prod = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			if (prod >= 10)
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
