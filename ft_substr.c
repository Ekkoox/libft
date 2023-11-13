#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if(start > slen)
		start = slen;
	if(len > (slen - start))
		len = slen - start;
	str = malloc(sizeof(char) * len + 1);
	if(!str)
		return(NULL);
	while(i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return(str);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	char	*str;

	str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	if (!str)
	{
		printf("ERROR");
		return (-1);
	}
	else
	{
		printf("str = %s\n", str);
	}
	return(0);
}*/
