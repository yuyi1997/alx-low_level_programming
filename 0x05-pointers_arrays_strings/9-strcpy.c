#include "main.h"

/**
 * _strcpy - copies the string pointed
 * including the terminating null type
 * to the buffer pointed to by dest
 * @dest: the destination pointer of string 
 * @src: the point to copy from
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
