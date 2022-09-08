#include <stdio.h>

/**
 * main - like a room where programs work
 * printf: to output a text, expression etc
 * Return: return 1 (that is return nothing)
 */

int main(void)
{
char *e = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(e, 1, "%s", stderr);
return (1);
}
