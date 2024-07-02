#include "main.h"

/*
 * rev_string - Reverses a string.
 * @s: Pointer to the string to reverse.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and reverses the string in place.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
