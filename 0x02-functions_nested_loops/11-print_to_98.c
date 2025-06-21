#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * followed by a new line.
 * @n: number to take as a start
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else if (i == 98)
			{
				printf("\n");
			}
			i++;
		}
	}
	else if (n >= 98)
	{
		j = n;
		while (j >= 98)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			else if (j == 98)
			{
				printf("\n");
			}
			j--;
		}
	}
}
