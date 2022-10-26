#include <unistd.h>

int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str++ != '\0')
		len++;
	return (len);
}
int main(int ac, char **av)
{
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
			write(1, &av[1][len], 1);
		write(1, "\n", 1);
		return (0);
	}
	else 
	{
		write(1, "\n", 1);
		return (0);
	}
}