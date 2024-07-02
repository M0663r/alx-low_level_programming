#include "main.h"
#include <stdio.h>

/*
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: Pointer to the string to print.
 *
 * Description: This function takes a pointer to a string as a parameter and prints every other character of the string, starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
