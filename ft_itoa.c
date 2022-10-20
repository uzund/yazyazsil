#include <unistd.h>
#include <stdlib.h>

int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
int	ft_count(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	char *str;

	len = ft_count(n);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		--len;
		str[len] = (absolute_value(n % 10) + '0');
		n = n / 10;
	} 
	return (str);
}

