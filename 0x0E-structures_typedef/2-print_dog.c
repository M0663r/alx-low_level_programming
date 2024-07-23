#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: This function prints the name, age, and owner of
 * the dog. If any element is NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
