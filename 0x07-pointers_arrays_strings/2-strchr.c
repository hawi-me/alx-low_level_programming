#include "main.h"
#include <stdio.h>

/**
 *_strchr - funtion print chracter that have occurance
 *@s: the first input charcheter
 *@c: charchter to compare
 *Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
