#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 * @s : string inputs
 *
 * Return : Always 0.
 */

void rev_string(char *s)
{
	int i, a;


	while (s[i] != '\0')
	{ 
	
		i++;

	}

	for (a =i ;a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
