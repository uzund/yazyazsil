#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		++i;
	}
	return (num * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	  if (n == -2147483648)
	  {
		  write(1, "-2147483648", 11);
		  return ;
	  }
	  else if (n < 0)
	  {
	  	write(1, "-", 1);
		n *= -1;
	  }
	  if (n > 9)
		  ft_putnbr(n / 10);
	  ft_putchar(n % 10 + '0');
}
int	main(int ac, char **av)
{
	int	i;
	int	num;
	int	sum;
	int k;

	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		if (num < 0)
		{
			write(1, "0\n", 2);
			exit (0);
		}
		sum = 0;
		k = 0;
		while (num >= 2)
		{
			i = num;
			while (i >= 2)
			{
				if (num % i == 0)
				{
					k++;
				}
				i--;
			}
			if (k == 1)
				sum += num;
			k = 0;
			num--;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	if (ac != 2)
		write(1, "0\n", 2);
	return (0);
}
