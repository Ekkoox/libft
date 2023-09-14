#include "libft.h"

void    *memcpy(void *destination, const void *source, size_t size)
{
    size_t i;
    unsigned char *src;
    unsigned char *dest;

    i = 0;
    src = source;
    dest = destination;
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}