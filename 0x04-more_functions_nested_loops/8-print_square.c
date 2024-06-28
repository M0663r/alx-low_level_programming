#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square of '#' characters in the terminal.
 * @size: Size of the square (number of rows and columns).
 *
 * Description:
 * Prints a square of '#' characters with each side of length 'size'.
 * If size is 0 or less, it just prints a newline ('\n').
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
