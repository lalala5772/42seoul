#include "libft.h"

static char             **ft_free(char **result)
{
        int     idx;

        idx = 0;
        while (!result[idx])
        {
                free(result[idx++]);
        }
        free(result);
        return (NULL);
}

static char             *ft_strndup(const char *s, int len)
{
        char    *res;
        int             idx;

        res = NULL;
        idx = 0;
        if (len == 0)
                return (NULL);
        if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
        {
                return (NULL);
        }
        while (idx < len)
        {
                res[idx] = s[idx];
                idx++;
        }
        res[idx] = '\0';
        return (res);
}

static char             *ft_create(const char *s1, char c, int *flag)
{
        char    *arr;
        int             idx;

        *flag = 1;
        arr = NULL;
        idx = 0;
        while (s1[idx] != '\0')
        {
                if (s1[idx] == c)
                {
                        arr = ft_strndup(s1, idx);
                        if (!arr)
                                return (NULL);
                        return (arr);
                }
                else if (idx == (int)(ft_strlen(s1)) - 1)
                {
                        arr = ft_strndup(s1, idx + 1);
                        if (!arr)
                                return (NULL);
                        return (arr);
                }
                idx++;
        }
        return (NULL);
}

static int              ft_word_count(const char *s, char c)
{
        int             wc;
        int             idx;

        wc = 0;
        idx = 0;
        while (s[idx] != '\0')
        {
                if ((idx == 0 && s[0] != c) ||
                (s[idx] == c && s[idx + 1] != c && s[idx + 1] != '\0'))
                {
                        wc++;
                }
                idx++;
        }
        return (wc);
}

char                    **ft_split(const char *s, char c)
{
        char    **result;
        char    *arr;
        int             flag;
        int             idx;
        int             stridx;

        stridx = 0;
        idx = 0;
        if (!(result = (char**)malloc(sizeof(char*) * (ft_word_count(s, c) + 1))))
                return (NULL);
        while (s[idx] != '\0')
        {
                flag = 0;
                if (idx == 0 && s[0] != c)
                        arr = ft_create(&s[idx], c, &flag);
                else if ((s[idx] == c && s[idx + 1] != c && s[idx + 1] != '\0'))
                        arr = ft_create(&s[idx + 1], c, &flag);
                if (flag == 1 && arr == NULL)
                        return (ft_free(result));
                else if (flag == 1)
                        result[stridx++] = arr;
                idx++;
        }
        result[stridx] = 0;
        return (result);
}
