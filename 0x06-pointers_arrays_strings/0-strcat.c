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
	while (dest[c])
	{c++};
	for (c2 =0;src[c2];c2++)
	{
		dest[c++];
	}
	return (dest);
}
