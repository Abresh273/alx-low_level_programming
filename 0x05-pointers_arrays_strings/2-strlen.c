#include "main.h"

/**
 * _strlen - return length of a string
 *
 * @s : string input
 *
 * Return : Always 0
 *
 */


int _strlen(char *s)
{
	int a;
	a = s[-1]-s[0];
	return (a);
}

