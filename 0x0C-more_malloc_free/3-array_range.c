#include "main.h"

/**
 *array_range -> range printer
 *
 *@min: minimum
 *@max: maximum
 *Return: The pointer to the newley created array
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);


}
