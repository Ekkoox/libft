#include "libft.h"

int check_char(char const *str, char c)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int dev_der(char const *s1,int len, int index, char const *set)
{
	int i;

	i = 0;
	
	while (check_char(set, s1[index]))
		index++;
	while (check_char(set, s1[len]))
		len--;
	while (index != len)
	{
		index++;
		i++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int y;
	char *str;

	i = 0;
	j = 0;
	y = ft_strlen(s1);
	str = malloc (sizeof(char) * dev_der(s1, y, i, set) + 1);
	while (j <= dev_der(s1, y, i, set))
	{
		while(check_char(set, s1[i]) == 1)
			i++;
		str[j] = s1[i];
		i++;
		j++;
		
	}
	str[j] = '\0';
	return (str);
}


/*int main()
{
	char str[] = "aacaboireaaca";
	char set [] = "ac";

	printf("%s", ft_strtrim(str, set));
	return(0);
}*/