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

/*La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient 
d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, et les octets sont 
ensuite copiés de la zone temporaire vers dest.*/  
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
