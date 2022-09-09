#include <stdio.h>
/**
 *  main - where the program runs
 *
 * return (0) - return nothing
 *	 */

int main(viod)
{
	char alpha = 'a';
	while (alpha <= 'z')
	  {
		putchar(tolower(alpha));
		alpha++;
	  }
	putchar("\n");
	return (0);
