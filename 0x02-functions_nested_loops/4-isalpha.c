#include "main.h"
/**
 * _isalpha - its a function in the main header that allows us to print
 * @c: an integer argument
 * Return: Always returns 0
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
