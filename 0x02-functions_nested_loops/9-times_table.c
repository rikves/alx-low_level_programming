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
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			res = n * m;
			// Right-align numbers:
			if (res < 10)
			{
				if (m != 0)
					_putchar(' '); // pad with space before single-digit numbers (except first col)
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			m++;
		}
		_putchar(10);
		n++;
	}
}
