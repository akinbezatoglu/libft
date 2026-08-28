/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 21:48:19 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/28 19:19:24 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (s[len] == (char)c)
		return ((char *)(s + len));
	while (len)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
