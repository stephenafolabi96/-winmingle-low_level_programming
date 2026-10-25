/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet using putchar twice.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
