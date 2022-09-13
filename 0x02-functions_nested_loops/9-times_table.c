#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * ro = row, co = column, di = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int ro, co, di;

	for (ro = 0; ro <= 9; ro++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (co = 1; co <= 9; co++)
		{
			di = (ro * co);
			if ((di / 10) > 0)
			{
				_putchar((di / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((di % 10) + '0');

			if (co < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
