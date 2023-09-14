#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if(size <= 0)
        return(ft_strlen(src));
    while(dst[i] && src[i] && (i < (size - 1)))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(ft_strlen(src));
}

/*#include <bsd/string.h>
int main()
{
    char str[] = "oeoeoeo";
    char dst[] = "je suis bg";
    size_t size = 6;

    printf("%ld\n", ft_strlcpy(str, dst, size));
    printf("%ld", strlcpy(str, dst, size));
    return(0);
}*/