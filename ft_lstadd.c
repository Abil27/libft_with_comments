/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 06:21:47 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:33:12 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	/* Cette fonction ajoute un nouveau called new qui est passee dans notre 
	parametre dans notre liste en le placant en tete de list
	*/

	new->next = *alst;
	*alst = new;
}
