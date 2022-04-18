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
	int i = 0, a;


	while (s[i] != '\0')
	{ 
	
		i++;

	}

	for (a = 1 ;a <=i; a++)
	{
		_putchar(s[-a]);
	}

}
