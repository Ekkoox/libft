/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/11/17 18:25:35 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 18:25:35 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if(n >= 0 && !src && !dest)
		return(dest);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}

/*int main()
{
		char    src[] = "lorem ipsum dolor sit amet";
		char    *dest;
		char *zizi;

		dest = src + 3;
		zizi = src + 3;
		alarm(5);
		if (dest != ft_memmove(dest, src, 5))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		printf("\n");
		if (zizi != memmove(zizi, src, 5))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		//if (src != ft_memmove(src, dest, 8))
		//   write(1, "dest's adress was not returned\n", 31);
		//write(1, dest, 22);
		return (0);
}*/