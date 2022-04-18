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
	int i,j;
	while (str[i] != '\0')
	{
		i++;
	}

       for ((j= i/2);j<i;j++)
       {
	       _putchar(str[j]);
       }
       _putchar(j);
	



}

