/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 07:47:15 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/02 20:43:50 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{   
	/* la fonction bzero rempli une zone de memoire avec 0. la seule difference avec memset
	est que memset on decide de la valeur mais avec bzero c'est aut matiquement zero'. Mais 
	si le n ou le len est o, ft_bzero ne fait rien */ 
	ft_memset(s, 0, n);
}
