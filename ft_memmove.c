/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:40:32 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/14 23:21:15 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		dptr = (unsigned char *)dst;
		sptr = (unsigned char *)src;
		while (len > 0)
		{
			len--;
			dptr[len] = sptr[len];
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
