#include "main.h"
/**
 *
 * _puts - printout the str
 *
 * @*str : input string
 *
 * Return : Always 0.
 *
 */
void _puts(char *str)
{
int i;
for(i = 0; str[i] != '\0'; i++ )
{
_putchar(str[i]);
}
_putchar('\n');
}

