#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int maxnumber;

	if (tab[0] == '\0')
		return (0);
	i = 0;
	maxnumber = tab[0];
	while (i < len)
	{
		if (tab[i] > maxnumber)
			maxnumber = tab[i];
		i++;
	}
	return (maxnumber);
}
