#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int visual = 1UL << index;

    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    if (n & visual)
        return (1);
    else
        return (0);
    {
    	unsigned long int number = 42;
    	unsigned int index = 3;
   	int bit = get_bit(number, index);
    }
   		 if (bit != -1)
        printf("Bit at index %u of %lu is: %d\n", index, number, bit);
    else
        printf("Error: Invalid index.\n");

    return (0);
}

