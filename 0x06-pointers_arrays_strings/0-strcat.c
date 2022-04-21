#include "main.h"

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
	int c, c2;
	c = 0;
	c2 = 0;
	while (dest[c] != '\0')
	{c++};
	for (c2 =0;src[c2];c2++)
	{
	dest[c++]=src[c2];
	}
	return (dest);
}
