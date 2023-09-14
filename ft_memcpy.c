#include "libft.h"

void    *ft_memcpy(void *destination, const void *source, size_t size)
{
    size_t i;
    const char *src;
    char *dest;

    i = 0;
    src = source;
    dest = destination;
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}

/*int main()
{
    char src[] = "oeee";
    char dest[] = "On est la";
    size_t size = 5;

    printf("%p\n", ft_memcpy(src, dest, size));
    printf("%p", memcpy(src, dest, size));
    return(0);
}*/