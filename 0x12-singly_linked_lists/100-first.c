#include <stdio.h>

/**
 * pre_main - function that prints a specific message before main is executed
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
