#include <stdio.h>
#include "main.h"

/**
 * memset fuction- fill the memory with a constant bytes
 * fills the first n bytes of the memory area poin
 * to by s with the constant b
 * @s: pointer to a memory location
 * @b: constant to fill memory
 * @n: bytes of the memory area to be filled
 *
 * Return: pointer to memmory s
 */

char *_memset(char *s, char b, unsigned int n);
{   
       unsigned int counter;
       for (counter = 0; counter < n; counter++);
       {
	       s[counter] = b;
       }
		return (s);
       
}
