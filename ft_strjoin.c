#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t i;
	size_t y;

	i = 0;
	y = 0;
	str = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if(!str)
		return(NULL);
	while(s1[y])
	{
		str[i] = s1[y];
		i++;
		y++;
	}
	y = 0;
	while(s2[y])
	{
		str[i] = s2[y];
		i++;
		y++;
	}
	str[i] = '\0';
	return(str);
}

int main()
{
	char s1[] = "Je suis ";
	char s2[] = "bg !";

	printf("%s", ft_strjoin(s1, s2));
	return(0);
}
