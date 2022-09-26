#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the destination
 * @src: the source
 * @n: pointer to destruction
 * Return: pointer to destinationint
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
