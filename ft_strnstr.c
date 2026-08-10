/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 21:48:35 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/10 22:33:18 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isfound(const char *big, const char *little, size_t len)
{
	while (*big && *little && len > 0)
	{
		if (*big != *little)
		{
			return (0);
		}
		big++;
		little++;
		len--;
	}
	if (*little == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;

	if (*little == '\0')
		return ((char *)big);

	l = 0;
	while (*big && l < len)
	{
		if (isfound(big, little, len - l))
			return ((char *)(big));
		big++;
		l++;
	}
	return (NULL);
}
