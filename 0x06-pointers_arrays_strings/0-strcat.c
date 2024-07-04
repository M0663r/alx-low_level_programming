#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @src: The destination string to which the source string is appended.
 * @dest: The source string to be appended to the destination string.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
