/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 21:48:19 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/10 22:33:43 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	len = ft_strlen(s);
	ch = (char)c;
	while (len > 0)
	{
		if (s[len] == ch)
			return ((char *)(s + len));
		len--;
	}
	if (s[0] == ch)
		return ((char *)s);
	return (NULL);
}
