/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 04:05:00 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:30:25 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n;
	char	*str;

	n = -1;
	if (!s || !f || (!(str = ft_strnew(ft_strlen(s)))))
		return ((void *)0);
	while (s[++n])
		str[n] = f(s[n]);
	return (str);
}
