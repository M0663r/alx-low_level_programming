#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters in the terminal.
 * @size: Size of the triangle (number of rows).
 *
 * Description:
 * Prints a right-aligned triangle of '#' characters with the specified size.
 * If size is 0 or less, it just prints a newline ('\n').
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
	{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
	}
	}
	else
	{
		putchar('\n');
	}
}
