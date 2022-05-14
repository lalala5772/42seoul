#include "libft.h"

int		ft_isupper(int c)
{
	return ((65 <= c) && (90 >= c));
}

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
