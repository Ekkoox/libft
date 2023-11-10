#include "libft.h"

int	count_char(const char *str, char c, int index)
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


char *ft_strndup(const char *str, int index, int n)
{
	int i;
	char *s;

	i = 0;
	s = malloc(sizeof(char) * n + 1);
	if(!s)
		return(NULL);
	while(str[index] && i < n)
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
	int len;
	char **tab;
	
	i = 0;
	j = 0;
	len = count_words(s, c);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if(!tab)
		return(NULL);
	while(j < len && s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_strndup(s, i, count_char(s, c, i));
			while(s[i] != c && s[i])
				i++;
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return(tab);
}
//1 14 19 25
#include <stdio.h>
void	freetab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
}

// int main(int ac, char **av)
// {
// 	// char	**splitter;
// 	// int	
// 	// i = 0;
// 	// splitter = NULL;
// 	// if (ac == 3)
// 	// {
// 	// 	splitter = ft_split(av[1], av[2][0]);
// 	// 	while (splitter[i])
// 	// 	{
// 	// 		printf("Splitter[%d] = %s\n", i, splitter[i]);
// 	// 		i++;
// 	// 	}
// 	// 	printf("Splitter[%d] = %s\n", i, splitter[i]);
// 	// }
// 	// freetab(splitter, i);
// 	// free(splitter);
// 	(void)ac;
// 	printf("%d", count_words(av[1], ' '));
// 	return (0);
// }

/*
int main(int ac, char **av)
{
 //   (void)ac;
    char **k;
    int i = 0;
	char *zerotest = "         Hello Motherfucking broken       split     ";
	char zero = ' ';

    //k = ft_split(av[1], av[2][0]);
	k = ft_split(zerotest, zero);
    while (k[i] != 0)
    {
        printf("%d", i);
        printf(": ");
        printf("%s\n", k[i]);
        free(k[i]);
       i++; 
    }
    free(k);
    return (0);
}
*/