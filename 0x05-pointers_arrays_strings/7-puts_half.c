#include "main.h"
/**
 * puts_half - A function that prints half of a string,
 * followed by a new line
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
	
	}
	count = count / 2;
	for (count = count / 2; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
