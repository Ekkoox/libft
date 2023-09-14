#include "libft.h"

int ft_isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    return(0);
}

/*#include <ctype.h>
int main()
{
     int c = 'T';

    printf("%d, ca marche\n", ft_isalpha(c));
    printf("%d, ca marche aussi", isalpha(c));
    return(0);  
}*/