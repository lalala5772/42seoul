/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee2 <mlee2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:54:52 by mlee2             #+#    #+#             */
/*   Updated: 2022/05/18 19:38:47 by mlee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (!to_find_len)
		return ((char *)str);
	while (str[i] && i + to_find_len <= n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j])
			{
				if (str[i + j] != to_find[j])
					break ;
				else if (j == to_find_len - 1)
					return ((char *)str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
