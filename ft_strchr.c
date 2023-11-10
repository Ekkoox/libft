#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
	if(!s)
		return(NULL);
    while(s[i])
    {
        if(s[i] == (unsigned char)c)
            return((char *) &s[i]);
        i++;
    }
	if(s[i] == (unsigned char)c)
        return((char *) &s[i]);
    return(NULL);
}

/*int main()
{
    char str[] = "";
    int c = '\0';

    printf("%s", ft_strchr(str, c));
    printf("%s", strchr(str, c));
    return(0);
}*/