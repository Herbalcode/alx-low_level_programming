#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer parameter
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		i++;
	}

	_putchar('\n');
}
