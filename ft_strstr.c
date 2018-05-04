/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 17:45:24 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:57:57 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		while (needle[i] == haystack[i])
		{
			if (!needle[i + 1])
				return ((char *)haystack);
			i++;
		}
		haystack++;
		i = 0;
	}
	return ((void *)0);
}
