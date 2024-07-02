#include "main.h"
#include <stdio.h>

/*
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to print.
 *
 * Description: This function takes a pointer to a string as a parameter and prints the second half of the string. If the number of characters is odd,
 * it prints the last n characters of the string where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
