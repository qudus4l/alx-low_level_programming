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

	for (lowabc = 'a'; lowabc <= 'z'; lowabc++)
	{
		putchar(lowabc);
	}
	return (0);
}
