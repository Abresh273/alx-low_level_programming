#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest : detination string
 *
 * @src : source string
 *
 * @n : integr
 *
 * Return : dest
 *
 */
 
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (des[i] != '\0')
{
i++;
}
j =0 ;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}


