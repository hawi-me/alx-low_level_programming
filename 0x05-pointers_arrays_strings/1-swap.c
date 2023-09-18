#include "main.h"

/**
 *swap_int - function that swap the value of a and b
 *@a: the first variable need swap
 *@b: the second variable need swap
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
