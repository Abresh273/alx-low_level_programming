#include "main.h"

/**
 *
 * puts_half - a function that prints half of a string.
 *
 *
 * @str : string input
 *
 * Return : Always 0.
 */

void puts_half(char *str)
{
	int i;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

