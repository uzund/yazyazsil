#include <unistd.h>
#include <stdlib.h>

int ft_count(int n)
{
    int len;
    
    len = 0;
    if (n < 0)
        len++;
    while(n)
    {
        len++;
        n /= 10;
    }
    return (len);
}

int absolute_value(int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int len;

    len = ft_count(nbr);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr < 0)
        str[0] = '-';
    else if (nbr == 0)
        str[0] = '0';
    while (nbr)
    {
        len--;
        str[len] = absolute_value(nbr % 10) + '0';
        nbr /= 10;
    }   
    return (str);
}