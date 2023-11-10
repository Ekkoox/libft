#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *tmp;

	if (!nmemb || !size)
		return (NULL);
	if ((int)(nmemb * size) < 0)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (tmp);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}

/*#include <limits.h>
int	main(void)
{
	size_t i;
	size_t j;

	i = 999999999999999999;
	j = 999999999999999999;
	printf ("%s", (char *)ft_calloc(i, j));
	printf ("%s", (char *)calloc(i, j));
	return (0);
}*/