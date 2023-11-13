#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *tmp;

	if ((int)nmemb < 0 && (int)size < 0)
		return (NULL);
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