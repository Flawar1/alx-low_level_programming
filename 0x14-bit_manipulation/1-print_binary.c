#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a binary representation
 * of a number.
 * @n: The number to be printed in binary.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		putchar((n & 1) + '0');
	}
	else
	{
		putchar('0');
	}
}
