#include <stdio.h>

/**
* main - prints all possible different combinations of two digits.
*
* Return: 0 Always(Success)
*/
int main(void)
{
	int n = 48;
	int m = 49;

	while (n <= 56)
	{
		while (m <= 57)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (!(n == 56 && m == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
		m = 48;
	}
	putchar(10);
	return (0);
}
