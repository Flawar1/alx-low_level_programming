#include <stdio.h>

/*
 * This program demonstrates the use of a magic number.
 * It prompts the user to enter a number, and then checks
 * whether that number is equal to the magic number.
 * If the numbers match, it prints a success message;
 * otherwise, it prints a failure message.
 *
 * Inputs: None
 * Outputs: None
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	* write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify p
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
