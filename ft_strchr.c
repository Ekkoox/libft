#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return((char *) &s[i]);
        i++;
    }
    return(0);
}

/*int main()
{
    char str[] = "je suis enzo!";
    int c = 'u';

    printf("%s\n", ft_strchr(str, c));
    printf("%s", strchr(str, c));
    return(0);
}*/