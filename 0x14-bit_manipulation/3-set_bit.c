#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @index: index starting from 0 of bit to be set
 * @n: points to the bit to set
 * Return: 1 on success or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
