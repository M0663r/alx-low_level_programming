#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes in the terminal.
 * @n: Number of backslashes to print (diagonal length).
 *
 * Description:
 * Prints n backslashes ('\') in a diagonal pattern followed by a newline ('\n').
 * If n is 0 or less, it just prints a newline.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
