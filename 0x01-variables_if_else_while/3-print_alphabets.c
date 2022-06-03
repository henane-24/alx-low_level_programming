#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alpahabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
        int lower, upper;

	lower = getchar();
        putchar(lower);
	upper = toupper(lower);
        putchar(upper);
	putchar('\n');
        return (0);
}

