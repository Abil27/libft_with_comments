/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 17:50:15 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:52:15 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + nlen <= len)
	{
		if (ft_strncmp(&haystack[i], needle, nlen) == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
