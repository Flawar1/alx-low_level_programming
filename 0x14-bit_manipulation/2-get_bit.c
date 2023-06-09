#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 42)
		return (0);

	for (i = 0; i <= 41; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
