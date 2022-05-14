#include "libft.h"

int		ft_islower(int c)
{
	return ((97 <= c) && (122 >= c));
}

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
