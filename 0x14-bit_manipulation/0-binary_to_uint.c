#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binart string pointer.
 *
 * Return: The converted number or unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int len, base_two;

	if (!b)
		return (0);

	uint = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
