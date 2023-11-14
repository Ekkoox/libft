#include "libft.h"

static int len(long int nb)
{
	int count;

	count = 0;
	if(nb == 0)
		return(1);
	if(nb < 0)
	{
		nb *= -1;
		count++; 
	}
	while(nb > 0)
	{
		nb /= 10;	
		count++; 	
	}
	return(count);
}

char *ft_itoa(int n)
{
	int i;
	char *str;
	long int nb;

	i = len(n);
	nb = n;
	str = malloc(sizeof(char) * i + 1);
	if(!str)
		return(NULL);
	if(i == 0)
		str[0] = '0';
	if(i < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while(i > 0)
	{
		i--;
		str[i] = nb % 10 + '0';
		nb = nb / 10;
	}
	return(str);
}

int main()
{
	printf("%s", ft_itoa(25));
	return(0);
}