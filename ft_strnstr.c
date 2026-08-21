/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezatog <abezatog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 21:48:35 by abezatog          #+#    #+#             */
/*   Updated: 2026/08/20 18:39:34 by abezatog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (ft_strncmp(big, little, len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
