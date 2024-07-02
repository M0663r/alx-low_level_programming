#include "main.h"
#include <stdio.h>

/**
* _puts - Prints a string followed by a new line to stdout.
* @str: Pointer to the string to print.
*
* Description: This function takes a pointer to a string as a parameter
* and prints the string followed by a new line to the standard output.
*/
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

