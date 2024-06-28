#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - Entry point of the program.
 *
 * Description:
 * Prints numbers from 1 to 100, replacing multiples of three with "Fizz",
 * multiples of five with "Buzz", and multiples of both with "FizzBuzz".
 * Each output is separated by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
