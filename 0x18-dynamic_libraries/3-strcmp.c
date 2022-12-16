#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: + or - or 0 depending on the comparism
*/

int _strcmp(char *s1, char *s2)
{
	int j;
	int value;

	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			value = s1[j] - s2[j];
		break;
		}
		else
		{
			value = 0;
		}
	}
	return (value);
}
