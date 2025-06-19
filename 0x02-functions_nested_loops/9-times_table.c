#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n = 0, m;
	int res;

	while (n < 10)
	{
		m  = 0;
		while (m < 10)
		{
			res = n * m;
			if (res >= 10)
			{
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
			}
			else
			{
				_putchar(res + 48);
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
			}
			m++;
		}
		_putchar(10);
		n++;
	}
}
