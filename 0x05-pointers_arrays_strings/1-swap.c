#include <stdio.h>
#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: a pointer dereference for changing the value of the variable a to b
 * @b:  pointer dereference for changing the value of the variable b to a
 * int c: assigning the address of the variable a to c
 *
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
