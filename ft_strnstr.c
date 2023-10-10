#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if(!little)
        return(big);
    while(big[i] && i < len)
    {
        if(big[i] == little[j])
            j++;
        else
            j = 0;
        i++;
        if(little[j] = '\0')
            return(&big[j])
    }
    return(NULL);
}

/*#include <bsd/string.h>
int main()
{
    char botte[100] = "On est la!";
    char aiguille[100] = "la";
    size_t n = 10;

    printf("%s\n", ft_strnstr(botte, aiguille));
    printf("%s", strnstr(botte, aiguille, n));
    return(0);
}*/