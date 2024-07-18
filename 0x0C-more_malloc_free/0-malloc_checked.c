#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The size of the memory to be allocated.
 *
 * Return: A pointer to the allocated memory or NULL if malloc fails.
 *         In case of allocation failure, exit process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
