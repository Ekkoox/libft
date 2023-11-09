#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *tab;

    if(!nmemb || !size)
        return(0);
    tab = malloc(nmemb * size);
    if(!tab)
        return(0);
    return(tab);
}

/*int	main(void)
{
	long long int i;
	long long int j;

	i = 2345678909089;
	j = 2356979385093;
	printf ("%p\n", ft_calloc(i, j));
    printf ("%p", calloc(i, j));
	return (0);
}*/

