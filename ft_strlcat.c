/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 21:48:05 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/28 22:42:22 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cpylen;
	size_t	i;

	dstlen = 0;
	while (dstlen < size && dst[dstlen])
		dstlen++;
	srclen = ft_strlen(src);
	if (dstlen >= size)
		return (srclen + size);
	cpylen = size - dstlen - 1;
	if (cpylen > srclen)
		cpylen = srclen;
	i = 0;
	while (i < cpylen)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
