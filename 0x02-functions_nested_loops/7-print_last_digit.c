#include "main.h"
/**
 * print_last_digit - is a function name
 * @n: the int variable
 * Return 0 - returns a value
 */

int print_last_digit(int n)
{
int last;

	n = (int)(n);
	if (n < 0)
		n = (-1) * n;
	last = n % 10;
	if ((last + '0') == '(')
		last = 8;
	_putchar(last + '0');
	return (last);

}
