#include <stdio.h>
#include "main.h"

/**
 * print_arguments - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 */
void print_arguments(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
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
	print_arguments(argc, argv);
	return (0);
}
