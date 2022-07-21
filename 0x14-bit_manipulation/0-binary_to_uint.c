#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int chars;

	if (b == NULL)
		return (0);

	for (chars = 0; b[chars]; chars++)
	{
		if (b[chars] != '0' && b[chars] != '1')
			return (0);
	}

	for (power = 1, total = 0, chars--; chars >= 0; chars--, power *= 2)
	{
		if (b[chars] == '1')
			total += power;
	}

	return (total);
}
