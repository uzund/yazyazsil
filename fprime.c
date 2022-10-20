#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		int	num;

		num = atoi(av[1]);
		if (num < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		if (num == 1)
		{
			write(1, "1\n", 2);
			return (0);
		}
		i = 2;
		while (num > 1)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num = num / i;
				if (num > 1)
					printf("*");
			}
			else
				i++;
		}
		printf("\n");
	}
	if (ac != 2)
		write(1, "\n", 1);
	return (0);
}
