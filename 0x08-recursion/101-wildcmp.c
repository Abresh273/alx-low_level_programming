#include "main.h"

/**
  * _strlen_recursion - Compare two strings.
  * @s1: the string first
  *
  *  @s1: the string second
  *
  * Return: the string length
  */
int wildcmp(char *s1, char *s2)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (wildcmp(s) + 1);
}
