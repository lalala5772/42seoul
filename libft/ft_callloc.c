#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(sizeof(*ptr) * nmemb * size)))
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}