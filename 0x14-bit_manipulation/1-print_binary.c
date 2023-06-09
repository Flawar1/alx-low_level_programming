#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int visual = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flo = 0;

	while (visual > 0)
	{
		if (n & visual)
		{
			putchar('1');
			flo = 1;
		}
		else if (flo || visual == 1)
		{
			putchar('0');
		}
		visual >>= 1;
	}
}

