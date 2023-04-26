#include <stdio.h>
<<<<<<< HEAD
/*
 *main - Entry point
 *Description: 'prints alphabets lowercase'
=======
/**
 *main - Entry point
 *Description: 'prints alphabets lowercase and uppercase'
>>>>>>> 6c3612214f55126c073ab9834b85d10624c24705
 *Return: always 0 (success)
*/
int main(void)
{
<<<<<<< HEAD
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
}
	putchar('\n');
	return (0);
=======
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
		putchar('\n');
		return (0);
>>>>>>> 6c3612214f55126c073ab9834b85d10624c24705
}
