#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int multiply(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
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
	return (multiply(argc, argv));
}
