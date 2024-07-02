#include "main.h"
#include <stdio.h>

/*
* print_rev - Prints a string in reverse followed by a new line.
* @s: Pointer to the string to print.
*
* Description: This function takes a pointer to a string as a parameter and prints the string in reverse followed by a new line to the standard output.
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
