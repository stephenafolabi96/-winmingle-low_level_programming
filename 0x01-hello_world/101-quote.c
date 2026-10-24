/**
 * Author: Stephen Afolabi
 * Program: WinMingle Community C Training
 * Description: Prints a quote to standard error using the write system call.
 */
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error/Exit status)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, sizeof(text) - 1);
	return (1);
}
