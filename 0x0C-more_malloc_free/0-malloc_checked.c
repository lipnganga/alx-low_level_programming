#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *
 *@b: Number to allocate memory for
 *Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);

}
