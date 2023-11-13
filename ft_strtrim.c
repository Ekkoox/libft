#include "libft.h"

int check_char(char const *str, char c)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int front(char const *s1, char const *set)
{
    int i;

    i = 0;
    while (s1[i] )//&& check_char(set, s1[i]))
    {
        if (check_char(set, s1[i]) == 0)
            return(i);
        i++;
    }
    return (0);
}

int back(char const *s1, char const *set)
{
    int i;
    int c;

    i = ft_strlen(s1) - 1 ;
    c = 0;
    while(i >= 0 )//&& check_char(set, s1[i]))
    {
        if (check_char(set, s1[i]) == 0)
            return(c);
        i--;
        c++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int len;
    int j;
    int p;
    char *str;

    i = 0;
    p = back(s1, set);
    j = front(s1, set);
    len = ft_strlen(s1) - (p + j);
    str = malloc (sizeof(char) * len + 1);
    while (i < len)
    {
        str[i] = s1[j];
        j++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

/*int main()
{
	char str[] = "aacaboireaaca";
	char set [] = "ac";

	printf("%s", ft_strtrim(str, set));
	return(0);
}*/