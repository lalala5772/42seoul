#include "libft.h"

void   *memset(void *dest, int value, size_t count)
{
    size_t  i;
    unsigned char   *ch;

    ch = (unsigned char *)dest;
    i = 0;
    while (i < count)
    {
        ch[i] = (unsigned char)value;
        i++;
    }
    return  (ch);

}