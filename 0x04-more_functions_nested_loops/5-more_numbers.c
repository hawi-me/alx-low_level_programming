#include "main.h"

/**
 *more_numbers - the function that prints 10 times number 0 to 1sed to 14
 *Return: 10 times the numbers
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j <= 14; j++)
		{
			if (j > 0)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
