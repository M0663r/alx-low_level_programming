#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times, each set followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
