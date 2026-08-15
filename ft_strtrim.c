/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 20:08:19 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/15 19:09:53 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_isset(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (ft_isset(*end, set))
		end--;
	len = end - s1 + 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1 <= end)
	{
		*str = *s1;
		str++;
		s1++;
	}
	*str = '\0';
	return (str - len);
}
