#include "main.h"

/**
 *print_rev - function that print the revers order
 *@s: variabel used for access the charachter
 *Return: nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
