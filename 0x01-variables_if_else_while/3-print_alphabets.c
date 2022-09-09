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
	for (upabc = 'A'; upabc <= 'Z'; upabc++)
	{
		putchar(upabc);
	}
	putchar('\n');
	return (0);
}

