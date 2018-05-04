/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 04:57:56 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:50:54 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	if (start + len > ft_strlen(s))
		return (NULL);
	while (len > 0)
	{
		len--;
		sub[len] = s[start + len];
	}
	return (sub);
}
