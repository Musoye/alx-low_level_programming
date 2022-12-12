#include "main.h"
/**
 * _strstr - fuction that locates string in a string
 * @haystack:The original string
 * @needle: the searching string
 * Return:the beginning of located string or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
		{
			return (a);
		}
		haystack++;
	}
	return (NULL);
}
