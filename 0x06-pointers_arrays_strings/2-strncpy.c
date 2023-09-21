#include "main.h"

/**
 *_strncpy - function that copy the sting
 *@dest: input value
 *@src: input value
 *@n: the number of byte copied
 *Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n  && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
			j++;
	}
	return (dest);
}
