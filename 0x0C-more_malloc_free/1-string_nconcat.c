#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: If successful, a pointer to a newly allocated space in memory
 *         containing the concatenated string.
 *         NULL if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total_len;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{	
	    s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	total_len = len1 + (n < len2 ? n : len2) + 1; /* Add 1 for null terminator */

	concat = malloc(total_len);
	if (concat == NULL)
	{	
    	    return (NULL);
	}

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, (n < len2 ? n : len2));
	concat[total_len - 1] = '\0';

	return (concat);
}
