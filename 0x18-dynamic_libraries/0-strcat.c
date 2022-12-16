#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination of the concatenation
* @src: string to be copied from
* Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++);

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
