#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to print the table up to
 */
void print_times_table(int n)
{
	int i = 0, j, k;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');

					if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (k < 100)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
