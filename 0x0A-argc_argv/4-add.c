#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * add_positive_numbers - adds positive numbers from command line arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int add_positive_numbers(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *p;

	for (i = 1; i < argc; i++)
	{
		for (p = argv[i]; *p; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	return (add_positive_numbers(argc, argv));
}
