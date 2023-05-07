#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets bit to zero
 * @index: index poined
 * @n: points to index
 * Return: 1 on success -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (n == NULL)
		return (-1);

	x <<= index;
	*n &= ~x;
	return (1);
}
