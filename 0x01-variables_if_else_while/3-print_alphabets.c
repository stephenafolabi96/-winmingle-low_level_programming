/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase then uppercase using putchar 3 times.
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
	char upper = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
