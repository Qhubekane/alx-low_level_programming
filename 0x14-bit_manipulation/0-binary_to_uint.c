#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string of 1 and 0 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1;
	int num;

	if (b == '\0')
		return (0);

	for (num = 0; b[num];)
		n++;

	for (num -= 1; num >= 0; num--)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);

		dec += (b[num] - '0') * pow;
		pow *= 2;
	}

	return (dec);
}
