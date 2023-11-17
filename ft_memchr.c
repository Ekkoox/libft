/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/11/17 18:21:17 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 18:21:17 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = ((unsigned char *)s);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char str[] = "Je suis enzo";
	int c = 'u';
	size_t n = 6;

	printf("%p\n", ft_memchr(str, c, n));
	printf("%p", memchr(str, c, n));
	return(0);
}*/