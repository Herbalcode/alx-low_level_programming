#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if it works, else 1
 */
int main(int argc, char *argv[])
{
	int b, c, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	c= atoi(argv[2]);
	diff = b * c;

	printf("%i\n", diff);

	return (0);
}
