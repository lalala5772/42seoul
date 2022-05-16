#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = 0;
	while (dest[i] && i < size)
	{
		dest[i + tmp] = src[tmp];
		tmp++;
	}
	if (i < size)
		dest[i + tmp] = NULL;
	return (i + ft_strlen(src));
}
