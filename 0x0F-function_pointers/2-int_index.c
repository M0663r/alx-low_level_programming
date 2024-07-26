#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Description: This function searches for an integer in an array and
 * returns the index of the first element for which the cmp function
 * does not return 0. If no element matches, it returns -1.
 * If size <= 0, it also returns -1.
 *
 * Return: The index of the first matching element, or -1 if no match is found
 * or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
