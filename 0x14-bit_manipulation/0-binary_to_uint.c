#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string of 1 and 0 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len;

	if (b == NULL)
	{
                return (0);
        }

        const size_t len = strlen(b);

        if (len == 0 || len > sizeof(unsigned int) * CHAR_BIT)
	{
                return (0);
        }

        unsigned int res = 0;
        unsigned int bit = 1;

        for (size_t i = len; i > 0; i--)
	{
                if (b[i-1] == '1')
		{
                        res += bit;
                }
		else if (b[i-1] != '0') 
		{
                        return (0);
                }
                bit <<= 1;
        }

        return res;
}
