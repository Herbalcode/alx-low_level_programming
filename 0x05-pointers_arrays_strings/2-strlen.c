#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function for counting the string length
 * @s: pointer for counting the strting length
 * 
 * Return: int i
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
