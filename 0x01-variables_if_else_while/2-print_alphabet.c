#include <stdio.h>
/**
 *  main - where the program runs
 *
 * return () - return nothing
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
	exit 0;
}
