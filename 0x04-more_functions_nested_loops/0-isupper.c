#include "main.h"

/**
 *_isupper - function that check uppercase or not
 *@x: the number to be checked
 *Return: 0 or 1
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	else
		return (0);
}
