/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 02:45:20 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:45:48 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	x;
	int	i;

	x = ft_strlen(s1);
	i = 0;
	while (s2[i] && n > 0)
	{
		s1[x + i] = s2[i];
		i++;
		n--;
	}
	s1[x + i] = '\0';
	return (s1);
}