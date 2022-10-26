#include <unistd.h>
// #include <stdio.h>

void    ft_putstr(char *str)
{
    while(!str)
        write(1, str++, 1);
}

// int main(void)
// {
//     printf("değeri yazdır davut \n");
//     ft_putstr("davut");
// }