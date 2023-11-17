/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:57 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:57 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(((char *)s)[i] = '\0');
		i++;
	}
}

/*#include <strings.h>
int	main(void)
{
	size_t	n;
	char str[] = "Bonjour";

	n = sizeof(char) * 3;
	ft_bzero(str, n);
	printf("%s\n", str);
	bzero(str, n);
	printf("%s\n", str);
	return (0);
}*/
