#include "main.h"

/**
 * print_diagonal - A function that drwas line on the terminal
 * @n: The number of times the char \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i =0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(36);
		}
		if (n <= 0)
			_putchar('\n');
		_putchar(92);
	}
	_putchar('\n');
}
