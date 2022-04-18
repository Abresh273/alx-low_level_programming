#include "main.h"

/**
 * print_array - hat prints n elements of an array of integers
 *
 * @a : input integer
 *
 * @n: input integer
 *
 * Return : Always 0.
 */

void print_array(int *a, int n)
{
	for (i=0;i<=n;i++)
	{
		printf("%d, ",a[i]);
	}
}
