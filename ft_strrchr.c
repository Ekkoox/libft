#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    while(i > 0)
    {
        if(s[i] == c)
            return((char *) &s[i]);
        i--;  
    }
    return(0);
}

/*int main()
{
    char str[] = "je suis enzo!";
    int c = 'e';

    printf("%s\n", ft_strrchr(str, c));
    printf("%s", strrchr(str, c));
    return(0);
}*/