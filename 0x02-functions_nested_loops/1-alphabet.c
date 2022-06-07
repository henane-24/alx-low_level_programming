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
	    _putchar(alphabet);
	    alphabet++;
    }
    _putchar('\n');
    return (0);
}
