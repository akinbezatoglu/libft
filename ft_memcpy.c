/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:40:25 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/14 23:08:43 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dst && !src)
		return (dst);
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	while (len)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		len--;
	}
	return (dst);
}
