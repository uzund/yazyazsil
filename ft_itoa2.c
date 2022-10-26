#include <unistd.h>
#include <stdlib.h>

int absolute_value(int n)
{
    if (n < 0)
        return(-n);
    else
        return (n);
}
int ft_count(int nbr)
{
    int len;

    len = 0;
    if (nbr < 0)
        len++;
    while (nbr)
    {
        len++;
        nbr = nbr / 10;
    }
    return (len);
}
char	*ft_itoa(int nbr)
{
    int len;
    char *str;

    len = ft_count(nbr);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr < 0)
        str[0] = '-';
    else if (nbr == 0)
        str[0] = '0';
    while (nbr != 0)
    {
        len--;
        str[len] = absolute_value(nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return (str);
}