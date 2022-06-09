#include "main.h"

/**
 * print_numbers - prints numbers from zero upto nine
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
