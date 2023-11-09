#include "libft.h"

int	count_char(char *str, char c, int index)
{
	int p;

	p = 0;
	while (str[index] && str[index] != c)
	{
		p++;
		index++;
	}
	return(p);
}


int count_words(const char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(str[0] != c)
		count++;
	while(str[i])
	{
		if(str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	return(count);
}

char *ft_strndup(const char *str, char c, int index)
{
	int i;
	char *s;

	i = 0;
	s = malloc(sizeof(char) * count_char(str, c, index) + 1);
	if(!s)
		return(NULL);
	while(str[index])
	{
		s[i] = str[index];
		i++;
		index++;
	}
	s[i] = '\0';
	return(s);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **tab;
	
	i = 0;
	j = 0;
	tab = malloc(sizeof(char) * count_words(s, c) + 1);
	if(!tab)
		return(NULL);
	while(i < count_words(s, c))
	{
		tab[i][j] = ft_strndup(s, c, i); 
		i++;
		j++;
	}
	tab[i] = NULL;
	return(tab);
}

