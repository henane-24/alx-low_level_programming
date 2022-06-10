#include "main.h"

/**
 * print_square - A function tha prints a square followed by a new line
 * @size: The size of the square
 * Return: void
 */

void print_square(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j =0; j < size; j++)
{
if (i != size - 1)
{
_putchar('\n');
}
_putchar(35);
}
_putchar('\n');
}
