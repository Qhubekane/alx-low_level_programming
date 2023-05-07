#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get one number from another
 * @m: first value
 * @n: second value
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			x++;
		m = m >> 1;
		n = n >> 1;
	}
	return (x);
}
