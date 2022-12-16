#include "main.h"

/**
*_strcpy - copies string from src to destination
*@dest: destination to be copied to
*@src: where it comes from
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
