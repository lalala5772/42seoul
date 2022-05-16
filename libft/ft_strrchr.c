#include "libft.h"

char *strrchr(const char *s, int c)
{
        const char *last = NULL;

        while (*s)
        {
                if (*s == (char)c)
                        last = s;
                s++;
                
        }
        return (char *)last;
}