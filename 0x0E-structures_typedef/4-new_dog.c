#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stddef.h>

/**
 * new_dog - Creates a new dog_t.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog_t, or NULL if the function fails.
 *
 * Description: This function allocates memory for a new dog_t
 * structure, copies the name and owner, sets the age, and returns
 * a pointer to the new structure. If memory allocation fails, the
 * function returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
