#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *tmp;

	if(nmemb == 0 || size == 0)
		return(malloc(0));
	if((nmemb * size) < nmemb || (nmemb * size) < size)
		return(NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (tmp);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}

// 3 6 7 8 9 10 11
/*#include <limits.h>
int	main(void)
{
	size_t i;
	size_t j;

	i = -5;
	j = -5;
	printf ("%s", (char *)ft_calloc(i, j));
	printf ("%s", (char *)calloc(i, j));
	return(0);
}*/