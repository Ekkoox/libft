#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if(!little[0])
        return((char *) big);
    while(big[i] && i + j < len)
    {
        if(big[i + j] == little[j])
            j++;
        else
		{
            j = 0;
        	i++;
		}
        if(little[j] == '\0')
            return((char *) &big[i]);
    }
    return(NULL);
}

/*#include <bsd/string.h>
int main()
{
    char botte[] = "lorem ipsum dolor sit amet";
    char aiguille[] = "dolor";
    size_t n = 15;

    printf("%s", ft_strnstr(botte, aiguille, n));
	printf("\n");
    printf("%s", strnstr(botte, aiguille, n));
//	printf("%p", ft_strnstr(botte, aiguille, n));
//	printf("%p", strnstr(botte, aiguille, n));
    return(0);
}*/