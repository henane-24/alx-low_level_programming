#include <stdio.h>
/**
 * main - prints all single digit numbers upto ten
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
	a++;
	putchar(48 + a);
	}
	putchar('\n');
	return (0);
}
