#include <stdio.h>

/**
 * print_line - Prints a line of underscores in the terminal.
 * @n: Number of underscores to print.
 *
 * Description: Prints n underscores ('_') followed by a newline ('\n').
 * If n is 0 or less, it just prints a newline.
 */
void print_line(int n)
{
	if (n > 0) 
	{
		int i;

		for (i = 0; i < n; i++) 
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
