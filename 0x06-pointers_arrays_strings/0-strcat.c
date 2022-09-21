#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destions string
 * @src: the source string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *holder = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (holder);
}
