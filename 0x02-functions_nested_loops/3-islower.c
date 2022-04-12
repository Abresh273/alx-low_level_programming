#include "main.h"

/**
* _islower - check for lower case
* @c: contains value to be compared
*
* Return: Always 1.
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
