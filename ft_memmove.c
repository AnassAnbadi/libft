/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:26:57 by aanbadi           #+#    #+#             */
/*   Updated: 2024/10/27 19:27:42 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	c_src = (char *)src;
	c_dst = (char *)dst;
	if (c_dst > c_src)
	{
		while (len > 0)
		{
			len--;
			c_dst[len] = c_src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}
