#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocating 2d array
 * @width: width of an array
 * @height: height of array
 * Return: a pointer to allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, l = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j > 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);

}

