#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c){
	write(1, &c, 1);
}
void print_comb(int i, int j , int k){

	ft_putchar(i);
	ft_putchar(j);	
	ft_putchar(k);
	if (!(i == 55)) 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}

}

int main(void)
{
	int	i = 48;
	int j,k;
	while (i <= 55) 
	{
		j = i + 1;
		while (j <= 56) 
		{
			k = j + 1;
			while (k <= 57) {
				print_comb(i,j,k);
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar(10);
	return (0);
}

