#include "main.h"

/**
* _strncpy - copies string to a number of byte
* @dest: destination to copy to
* @src: string to copy
* @n: number of bytes
* Return: pointer to dest after copyimg
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
