#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	int a = 0;
	int j;

	while (s[a] != '\0')
	{
		a++;
	}
	for (j = a - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
