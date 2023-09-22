#include "main.h"

/**
 *reverse_array - function that reverse the array
 *@a: the input
 *@n: the size of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

