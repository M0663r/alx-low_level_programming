#include <stdio.h>
#include "main.h"

/**
 * count_arguments - prints the number of arguments passed to the program
 * @argc: number of command line arguments
 *
 * Return: Always 0 (Success)
 */
int count_arguments(int argc)
{
	printf("%d\n", argc - 1);
	return (0);
}

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	return (count_arguments(argc));
}
