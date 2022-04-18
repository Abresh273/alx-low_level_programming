# include "main.h"


/**
 *
 * _atoi -  a function that convert a string to an integer.
 *
 * @s : input argument char
 *
 * Return : Always 0
 *
 */

int _atoi(char *s)
{
	int i;
	
	for (i=0;s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			a[i]=s[i];
		}
	}

	return (a);
}
