#include "main.h"
/**
 * print_sign - its a function in the main header that allows us to print
 * @n: an integer argument
 * Return: Always returns 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
return (1);
else if (n == 0)
{
_putchar('0');
}
return (0);
else
return (-1);
}
