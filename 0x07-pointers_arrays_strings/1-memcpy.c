#include "main.h"

/**
 *_memcpy - function that n byte from a src to dest
 *@dest: final place
 *@src: the source of the input
 *@n: the number of byte copied
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
