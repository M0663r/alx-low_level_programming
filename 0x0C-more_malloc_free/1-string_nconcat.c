#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 *         The returned pointer points to a newly allocated space in memory.
 *         The caller is responsible for freeing the returned pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0;
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{	
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{	
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[concat_len] = '\0';
	
	return (concat);
}
