/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 06:25:01 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:34:19 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	/* dans cette fonction nous prenons en parametre ladresse dun pointeur sur un lien
	puis on libere la memoire sur ce dernier avec la fonction del qui a ete passe en parametre
	ainsi que liberer la memoire du lien. pour eviter que tout soit del, on renvoi le poiteur
	actuel sur Null*/
	
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
