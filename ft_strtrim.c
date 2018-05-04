/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 05:42:15 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:03:43 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	n;
	size_t	i;
	size_t	j;

	if (!s)
		return (ft_strdup(""));
	j = ft_strlen((char *)s) - 1;
	i = 0;
	if (!s[i])
		return (ft_strdup(""));
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	if (i > j)
		return (ft_strdup(""));
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j != 0)
		j--;
	if (!(str = ft_strnew(j - i + 1)))
		return ((void *)0);
	n = 0;
	while (i < j + 1)
		str[n++] = s[i++];
	if (j == 0)
		return (ft_strdup(""));
	return (str);
}
