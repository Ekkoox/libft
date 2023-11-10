#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;

    while(s[i])
        i++;
    while(i > 0)
    {
        if(s[i] == (unsigned char) c)
            return((char *) &s[i]);
        i--;  
    }
	if(s[i] == (unsigned char) c)
            return((char *) &s[i]);
    return(NULL);
}

/*int main()
{
    char str[] = "je suis enzo!";
	char yo[] = "je suis enzo!";
    int c = '\0';

    printf("%s", ft_strrchr(str, c));
    printf("%s", strrchr(yo, c));
    return(0);
}*/