#include "main.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		
	}
	else
		_putchar('\n');
}
