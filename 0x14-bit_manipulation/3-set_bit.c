#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the value of a bit to 1
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it is successful, -1 if it is not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 65)
		return (-1);

	s = 1 << index;
	*n = (*n | s);

	return (1);
}
