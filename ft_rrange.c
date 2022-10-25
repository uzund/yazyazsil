#include <unistd.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len;
    int *nbr;

    len = (start - end);
    if (len < 0)
        len *= -1;
    len++;
    nbr = (int *)malloc(sizeof(int) * len);
    if (!nbr)
        return (NULL);
    while (len--)
    {
        nbr[len] = start;
        start += 1;
    }
    return (nbr);
}
