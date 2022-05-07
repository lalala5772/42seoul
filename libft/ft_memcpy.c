#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n)
{
    char    *tmp = dest;
    const char  *s = src;

    while (n--)
        *tmp++ = *s++;
    
    return  (dest);
}