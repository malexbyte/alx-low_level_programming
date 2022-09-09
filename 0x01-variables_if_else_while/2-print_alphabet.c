#include <stdio.h>
/**
 *  main - where the program runs
 *
 * return (0) - return nothing
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
