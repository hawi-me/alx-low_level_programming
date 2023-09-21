#include "main.h"

/**
 *_strncat - function that concatenation of the string
 *@dest: the input value
 *@src: the input value
 *@n: the number of btes
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);

}
