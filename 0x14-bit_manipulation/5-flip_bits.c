#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits you
 * need to flip to get from one number to another.
 * @n: num one.
 * @m: num two.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}

	return (numbits);
}
