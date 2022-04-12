#include "main.h"

/**
* main - check the code.
*
* Return: Always 0.
*/
void print_alphabet_x10(void);
{
    char c;
    int a;
    for (c = 'a'; c <= "z"; c++)
    {
	    for (a = 0; c <= 9; c++)
	    {
		    _putchar(c);
	    }
	    _putchar('\n');
    }
}
