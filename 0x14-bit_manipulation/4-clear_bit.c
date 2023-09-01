#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: an unsigned long int pointer.
 * @index: index of the bit.
 *
 * Return: 1 if it is successful, -1 if it is not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 65)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
