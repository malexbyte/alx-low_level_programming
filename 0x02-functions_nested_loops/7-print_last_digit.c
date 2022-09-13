#include "main.h"
/**
 * print_last_digit - is a function name
 * @n: the int variable
 * Return 0 - returns a value
 */

int print_last_digit(int n)
{
n = (-1) * n;
n = n % 10;
_putchar('0' + (n % 10));
return (n);

}
