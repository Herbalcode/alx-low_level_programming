#include <stdio.h>

/**
 * program that print it name
 * @argc: program counter
 * @argv: program vector to display argument
 * Return: 0 successful
 */

int main(int argc, char **argv[])
{
        (void) argc;
        printf("%s\n", argv[0]);
        
        return (0);
}
