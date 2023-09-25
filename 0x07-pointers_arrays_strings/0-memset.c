#include "main.h"

/**
 *_memset function that print unsigned
 *@n: bytes
 *@b: constant byte
 *@s: pointed destination
 *Return: the char 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

