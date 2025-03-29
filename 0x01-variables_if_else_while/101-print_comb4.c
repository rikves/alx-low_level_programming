#include <stdio.h>

/**
* main - prints all possible different combinations of three digits.
*
* Return: 0 Always(Succeses)
*/
int main(void)
{
	int	m = 48;
	int	n = 49;
	int	o = 50;

	while (m <= 55)
	{
		while (n <= 56)
		{
			while (o <= 57)
			{
				if (m < n && n < o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55 || n != 56 || o != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			o = 50;
			n++;
		}
		n = 49;
		m++;
	}
	putchar(10);
	return (0);
}
