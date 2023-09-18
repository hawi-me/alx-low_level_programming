#include "main.h"

/**
 *_strlen - function that print the length of the string
 *@s: the varibel that used to count the string
*Return: the sting length value
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
return (length);
}
