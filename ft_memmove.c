#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(dest < src)
    {
        while(i < n)
        {
            ((unsigned char*)dest)[n - 1] = ((unsigned char *)src)[n - 1];
            n--;
        }
    }
    else
    {
        while(i < n)
        {
            ((unsigned char*)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return(dest); 
}

/*int main()
{
    char str[] = "La maison de mickey";
    char str2[] = "";
    size_t n = 5;

    printf("%p\n", ft_memmove(str, str2, n));
    printf("%p", memmove(str, str2, n));
    return(0);
}*/