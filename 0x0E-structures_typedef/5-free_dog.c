#include <stdlib.h>
#include "dog.h"
#include <stddef.h>

/**
 * free_dog - Frees memory allocated for a dog_t structure.
 * @d: Pointer to the dog_t structure to free.
 *
 * Description: This function frees the memory allocated for the
 * name and owner strings, as well as the memory allocated for the
 * dog_t structure itself. If the pointer is NULL, the function does
 * nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{	
		free(d->name);
		free(d->owner);
		free(d);
	}
}
