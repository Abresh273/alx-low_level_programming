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
int i = 0;
int j = 0;
char b;
while(dest[i] != '\0')
{
i++;
}
while(src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';	
return (dest);
}

