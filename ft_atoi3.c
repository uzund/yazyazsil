#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int n;
    int sign;

    i = 0;
    n = 0;
    sign = 1;
    while (str[i] < 32)
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = (str[i] - '0') + (n * 10);
        i++;
    }
    return (n * sign);
}