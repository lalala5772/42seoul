#include "libft.h"
//길이 조정 필요
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    
    i = 0;
    if (dst == NULL && src == NULL)
        return  (NULL);
    if (dst < src)
    {
        while (i < len)
        {
            (((unsigned char *)dst)[i] = ((unsigned char  *)src)[i]);
            i++;
        }
    }
    else
    {
        i = len;
        while (i)
        {
            ((unsigned char *)dst)[i-1] = ((unsigned char  *)src)[i-1];
            i--;
        }
    }
    return  (dst);
}