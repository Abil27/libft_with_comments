/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 06:26:32 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:35:00 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Cette fonction prend la fonction f passe en parametre et lapplique a tous les
liens dans notre linked list. On check si la fonction n'est pas null, on applique 
la fonction a chaque lien et on initialise le lien actuel pour etre le next element
puis on continue la loop jusqua la fin ou jusqua ce quon trouve un NULL' */
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	if (lst->next)
		ft_lstiter(lst->next, f);
	f(lst);
}
