#include <stdio.h>

/**
* main-  prints all possible combinations of two two-digit numbers.
*
* Return:0 Always(success)
*/

int main(void)
{
	int i = 0;
	int j;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (!(i == 98))
				{
					putchar(',');
					putchar(' ');

				}
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
