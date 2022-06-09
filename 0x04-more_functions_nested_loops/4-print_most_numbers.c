#include "main.h"

/**
 * print_most_numbers - prints numbers 1 upto 9 except 2 and 4
 * @c: integer
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n')
}
