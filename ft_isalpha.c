/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/11/17 18:04:03 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:03 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <ctype.h>
int	main(void)
{
		int c = 'T';

	printf("%d, ca marche\n", ft_isalpha(c));
	printf("%d, ca marche aussi", isalpha(c));
	return(0);
}*/