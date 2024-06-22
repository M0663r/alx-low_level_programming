#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	for (num = 0; num <= 5; num++)
	{
		putchar(num + 'a');
	}
	putchar('\n');
	return (0);
}
