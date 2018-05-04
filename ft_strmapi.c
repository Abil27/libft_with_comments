/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 04:06:28 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:31:00 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*str;

	n = -1;
	if (!s || !f || (!(str = ft_strnew(ft_strlen(s)))))
		return ((void *)0);
	while (s[++n])
		str[n] = f(n, s[n]);
	return (str);
}
