#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_checked - function that allocates memory using malloc
 *
 * @b: integer for memory allocation
 *
 * Return : Always 0
 *
 */

void *malloc_checked(unsigned int b)
{
  void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);

}
