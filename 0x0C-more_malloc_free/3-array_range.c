#include "main.h"
#include <stdlib.h>

/**
  * array_range - array of integers
  * @min: min input
  * @max: max input
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *r, i = 0;

	if (min > max)
		return (NULL);

	r = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (r == NULL)
		return (NULL);

	while (min <= max)
	{
		r[i] = min;
		i++;
		min++;
	}

	return (r);
}
