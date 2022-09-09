#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char abclow;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (abclow = 'a'; abclow <= 'f'; abclow++)
		putchar(abclow);
	putchar('\n');

	return (0);
}
