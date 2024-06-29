#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * Finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest = factor;
			number /= factor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
		factor++;
	}

	printf("%ld\n", largest);
	return 0;
}
