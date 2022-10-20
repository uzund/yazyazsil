#include <unistd.h>
#include <stdlib.h>
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


int	main(int ac, char **av)
{
	int	i;

	if (ac == 4)
	{
		if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
		{
			write(1, "\n", 1);
			exit (0);
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
				write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	if (ac != 4)
		write(1, "\n", 1);
	return (4);
}
