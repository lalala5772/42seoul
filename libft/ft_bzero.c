#include "libft.h"
//수정필요
void    *bzero(void *ptr, size_t n)
{
    unsigned char   *ch;

    ch = (unsigned char *)ptr;
    while(n--)
    {
        ch = 0;
        *ch++;
    }
    return  (ch);
}