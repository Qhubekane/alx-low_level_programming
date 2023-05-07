#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * index: index starting from 0
 * n: unsigned long int
 * Return: bit of index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	if ((n & (1 << index)) == 0
			return (0);
	else
		return (1);
}
