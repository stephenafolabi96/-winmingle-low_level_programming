/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase.
 */
#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
