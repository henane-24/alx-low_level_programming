#include "main.h"

/**
 * print_most_numbers - prints numbers 1 upto 9 except 2 and 4
 * @c: integer
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
