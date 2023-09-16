#include "main.h"

/**
 * print_line - function that draw line
 *@n: munber of times the character_should be
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
