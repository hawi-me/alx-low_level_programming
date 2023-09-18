#include "main.h"

/**
 *_puts - function that print sting followed by new line
 *@str: variabel used to print the string
 *Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
