/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee2 <mlee2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:30:32 by mlee2             #+#    #+#             */
/*   Updated: 2022/05/18 19:19:52 by mlee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t count)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		ch[i] = (unsigned char)value;
		i++;
	}
	return (ch);
}
