#include <stdio.h>
#include "main.h"

/** 
 * get_endianness - check indianness
 * Reutn: 0 if big and 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *endi = (char *)&i;

	if (*endi == 1)
		return (1);
	else
		return (0);
}
