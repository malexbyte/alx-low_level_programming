#include "main.h"
/**
 * print_alphabet - its a function in the main header that allows us to print
 *
 * Return: Always returns 0
 */

void print_alphabet_x10(void)
{
char a = 'a';
int i = 1;
while (i <= 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
i++;

}
_putchar('\n');

}
