#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char alphabet = 'a';
    
    while (alphabet <= 'z')
    {
	    print_alphabet();
	    putchar(alphabet);
	    alphabet++;
    }
    putchar('\n');
    return (0);
}
