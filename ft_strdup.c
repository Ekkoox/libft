#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    int i;

    i = 0;
    dup	= malloc(sizeof (char) * ft_strlen(s) + 1);
    if(!dup)
        return(NULL);
    while(s[i])
    {
        dup[i] = s[i];
        i++;
    }
	dup[i] = '\0';
    return(dup);
}

/*int main()
{
    char s1[] = "Je suis enzo !";

    printf("%s\n", ft_strdup(s1));
    printf("%s", strdup(s1));
    return(0);
}*/
