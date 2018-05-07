/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 03:49:03 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/02 21:18:06 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction memchr() examine les n premiers octets de la zone mémoire pointée par s
 à la recherche du caractère c. Le premier octet correspondant à c 
 (interprété comme un unsigned char) arrête l'opération */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	/*While our i variable is less than the parameter n we will have our loop
	 * continue. Inside we want to see if the current index position that has
	 * been casted as an unsigned char is equal to the parameter c that has
	 * also been casted as an unsigned char. If this statement is true we will
	 * return a char casted pointer to the index position that contains c. If
	 * i is no longer less than n and we still have not located c, we will
	 * return NULL.*/
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (&((unsigned char*)s)[i]);
		i++;
	}
	return (NULL);
}
