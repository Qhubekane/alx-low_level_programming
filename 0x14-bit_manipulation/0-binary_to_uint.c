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
	int n;

	if (b == '\0')
		return (0);

	for (n = 0; b[n] != 0;)
		n++;

	for (n -= 1; n >= 0; len--)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);

		dec += (b[n] - '0') * pow;
		pow = pow * 2;
	}

	return (dec);
}
