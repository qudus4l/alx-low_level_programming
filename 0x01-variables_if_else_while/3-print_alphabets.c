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
	char lowabc;
	char upabc;

	for (lowabc = 'a'; lowabc <= 'z'; lowabc++)
	{
		putchar(lowabc);
	}
	for (upabc = 'a'; upabc <= 'z'; upabc++)
	{
		putchar(upabc);
	}
	putchar('\n');
	return (0);
}

