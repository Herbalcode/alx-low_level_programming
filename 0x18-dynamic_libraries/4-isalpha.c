#include "main.h"
/**
 *_isalpha - function that checks for alphabetic
 *
 *Return: 1 & 0 for each truth condiction
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
