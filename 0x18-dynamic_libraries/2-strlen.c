#include "main.h"

/**
* _strlen - find the lenght of a string
* @s: string to check
* Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
