#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int num;
    int sign;

    i = 0;
    num = i;
    sign = 1;
    while (str[i] < 32)
        i++;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (str[i] - '0') + (num * 10);
        i++;
    }
    return (num * sign);
}