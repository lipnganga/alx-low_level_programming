#include "main.h"
#include <string.h>

/**
 *print_diagsums - print sum of two diagonals os square matrix
 *@a: the name of array
 *@size: size of array
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
