#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4, each on a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			printf("%d\n", i);
		}
	}
}
