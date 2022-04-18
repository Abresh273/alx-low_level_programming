#include "main.h"

/**
 * puts2 - a function that prints every other character of a strin
 *
 *@str : string input
 *
 *Return : Always 0.
 */

void puts2(char *str)
{
	int i, j;
	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(j);
		i++;
	}
}

