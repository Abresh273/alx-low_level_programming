#include "main.h"
#include <stdio.h>

/**
 * _strcat - unction that concatenates two strings.
 *
 * @dest : destination string charactor
 * 
 * @src : Source charactor
 * 
 * Return : Always 0.
 *
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

