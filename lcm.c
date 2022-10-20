#include <unistd.h>
//#include <stdio.h>

int hcf(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (hcf(b, a % b));
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a <= 0 || b <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}	
	return (a * b / hcf(a, b));
}
/*
int	main(void)
{
	printf("En Küçük Ortak Katını (EKOK) bulmak için iki pozitif sayı girin \n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d ve  %d sayılarının EKOK değeri:  %d\n", a, b, lcm(a, b));
	return (0);
}
*/
