#include "main.h"

/*
 *_puts_recursion -  function that prints a string, followed by a new line.
 *
 *
 *@s: string input
 *
 *Return : Always 0.
 */


void _puts_recursion(char *s)
{
	int i = 0;
        printf("*s",s);
	i++;
	if(s[i] != '\0')
	{
		
                _puts_recrusion(s[i])
	}
	

}

