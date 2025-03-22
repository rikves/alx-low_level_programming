#include <stdio.h>
#include <unistd.h>
/**
* main - program that prints all single digit numbers 0 to 10.
*
* Return:0 Always (Success)
*/

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
