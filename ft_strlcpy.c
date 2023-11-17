/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/11/17 18:36:34 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 18:36:34 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*#include <bsd/string.h>
int	main(void)
{
//   char str[] = "lorem ipsum dolor sit amet";
		char dst[] = "";
		char dest[] = "";
//  size_t size = 15;

	printf("%zu\n", ft_strlcpy(dst, "lorem ipsum dolor sit amet", 15));
	printf("%zu", strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	return(0);
}*/