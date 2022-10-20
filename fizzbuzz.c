#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else
		{
			if (i >= 10)
				ft_putchar("0123456789"[i / 10]);
			ft_putchar("0123456789"[i % 10]);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
