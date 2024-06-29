#include <stdio.h>

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to print.
 *
 * Description:
 * Recursively prints each digit of the integer n.
 * Handles negative numbers by printing a '-' character first.
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	putchar((n % 10) + '0');
}
