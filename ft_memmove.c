/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 06:12:14 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:13:10 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (d);
}
