  #include "main.h"

/**
 *string_toupper - function that convert to upeprcas
 *@n: the sting that is converted
 *Return: the upper case
 */

char *string_toupper(char *n)
{
	int j = 0;

	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - 32;
		}
			j++;
	}
	return (0);
}
