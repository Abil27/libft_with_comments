/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 06:23:43 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:33:48 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Dans cette fonction nous allons prendre en parametre ladresse dun pointeur sur
un lien et liberer la memoire sur ce dernier et tous les liens qui le suivent les
uns pares les autres en utilisant la fonction del qui a ete passe en parametre
egalement.*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(&(*alst), del);
}
