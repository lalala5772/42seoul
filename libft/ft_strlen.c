#include "libft.h"

int strlen(char *c)
{
    int i = 0;
    while (c[i])
        i++;
    return  (i);
}