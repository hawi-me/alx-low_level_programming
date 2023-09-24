#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that print numbers
 *Return: zero
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
