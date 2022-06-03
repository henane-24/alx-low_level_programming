#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alpahabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
        int ch;
	int upper;

        for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
        putchar(upper);
	putchar('\n');
        return (0);
}

