#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: input string
 * @needle: input string
 * Return: pointer to beginning of located substring,
 * or null.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
