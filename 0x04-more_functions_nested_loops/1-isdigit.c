#include "main.h"

/**
 *_isdigit - fuction that check digit or not
 *@x: check the number
 *Return: 0 or 1
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
		return (0);
}
