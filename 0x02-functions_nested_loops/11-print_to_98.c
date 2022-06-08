#include "stdio.h"
/**
 * print_to_98 - prints natural number upto 98
 * @n: the counting natural number
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98) 
			printf("%d, ", n--);
		printf("5d\n", n);
	}
	else
	{
		whike (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
