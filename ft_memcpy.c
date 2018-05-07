/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 01:21:09 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:09:26 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* this function copies n bytes from memory area src to 
 * memory area dst. If dst and src overlap, behavior is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This
 * function returns the original value of dst.*/
void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return ((unsigned char*)dst);
}
