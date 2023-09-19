#include "main.h"
#include <stdio.h>

/**
 *print_array - function that print array
 *@n: the number that specify the legth of array
 *@a: the number found in the array
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
printf(", ");
		}
	}
	printf("\n");
}
