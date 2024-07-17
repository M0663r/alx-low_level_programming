#include <stdio.h>
#include "main.h"

/**
 * print_program_name - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int print_program_name(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
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
	return print_program_name(argc, argv);
}
