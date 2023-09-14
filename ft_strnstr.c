#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while(big[i])
    {
        if(little[j] == big[i])
            j++;
        i++;            
    }
    return(little);
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