#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	if(start > ft_strlen(s))
		return(NULL);
	if(start + len > ft_strlen(s))
		return(NULL);
	str = malloc((len + 1) * sizeof(char));
	if(!str)
		return(NULL);
	while(len > i)
	{
		str[i] = s[start];
		i++;
		start++;
	}
		str[i] = '\0';
	return(str);
}

int main()
{
		char str[] = "Je suis Papa";
	unsigned int start = 8;
	size_t len = 4;

	printf("%s", ft_substr(str, start, len));
	return(0);
}
