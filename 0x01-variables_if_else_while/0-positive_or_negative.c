#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* File: positive or negative
 * variables if else while
 * 
 */

/**
 * main - prints postive or negative
 *
 * Return: o
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0) {
	printf("%d\n", is positive);
	}
	if (n=0)
	{
	printf("%d\n", is zero);
	}
	if (n<0)
	{
	printf("%d\n" is negative);
	}
	return (0);
}
