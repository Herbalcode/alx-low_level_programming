#include "main.h"
/**
 *prints every minute of the day of Jack Bauer
 *
 *Return: void
 */
void jack_bauer (void)

{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;
	while (hours <= 23)
	{
	while (minutes <= 59)

{

mins_remainder = minutes %

hours_remainder- hours % 10;

_putchar(hours / 10 + "); _putchar(hours_remainder + ");

_putchar();

_putchar(minutes / 10+ 0);

_putchar(mins_remainder + ");

minutes++;

_putchar("\n');

}

hours++;

minutes

}
