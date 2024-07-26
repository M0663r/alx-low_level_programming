#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A pointer to the function that prints the name
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{	
		return;
	}
	f(name);
}
