#include "main.h"
/**
 * puts_half - A function that prints half of a string,
 * followed by a new line
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count = count / 2;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
