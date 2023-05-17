#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _abs - prints the absolute value of a number
*@i: number targeted
*Return: returns 0
*/
int _abs(int i)
{
if (i > 0)
return (i);
else if (i < 0)
return (-i);
else
return (0);
}
