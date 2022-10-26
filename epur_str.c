#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	k;

	if (ac == 2)
	{
		k = 0;
		i = 0;
		while (av[1][i] <= 32)
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ')
				k += 1;
			else
				k = 0;

			if (k <= 1 && av[1][i + 1] != '\0')
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}