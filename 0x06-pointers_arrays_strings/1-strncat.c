#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string to which the source string is appended.
 * @src: The source string to be appended to the destination string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
