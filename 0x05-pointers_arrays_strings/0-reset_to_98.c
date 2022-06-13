#inlcude "main.h"
/**
 * reset_to_98 - A function that takes to an int as parameter and updates the value
 * @n: an integer input
 * Return: void
 */
void reset_to_98(int *n)
{
	char *p;
	p = &n;
	*p = 98;
	return (void);
}
