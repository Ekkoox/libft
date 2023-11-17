/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:30:51 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 19:29:22 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(const char *str, char c, int index)
{
	int	p;

	p = 0;
	while (str[index] && str[index] != c)
	{
		p++;
		index++;
	}
	return (p);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char	*ft_strndup(const char *str, int index, int n)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * n + 1);
	if (!s)
		return (NULL);
	while (str[index] && i < n)
	{
		s[i] = str[index];
		i++;
		index++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	i = 0;
	j = 0;
	len = count_words(s, c);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (j < len && s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_strndup(s, i, count_char(s, c, i));
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
// 1 14 19 25
// #include <stdio.h>

// void	freetab(char **tab, int i)
// {
// 	while (i >= 0)
// 	{
// 		free(tab[i]);
// 		i--;
// 	}
// }

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
int	main(int ac, char **av)
{
	char	**k;
	int		i;
	char	*zerotest;
	char	zero;

 //   (void)ac;
	i = 0;
	zerotest = "         Hello Motherfucking broken       split     ";
	zero = ' ';
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