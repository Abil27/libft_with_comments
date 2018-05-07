/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:11:46 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:48:30 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* la fonction strnew permet dalouer de l'espace et de retrourner un fresh string
suivi de '\0'. Chaque caractere de la string est set a '\0'. Et si lallocation fail
retourne un NULL.*/

char	*ft_strnew(size_t size)
{
/* Pour ce faire nous allons simplement utiliser la fonction ft_memalloc avec le size
comme parametre. Ensuite on le cast en un char parce que c'est new str qu'on veut.
Ensuite on ajoute +1 pour compenser le '\0' a la fin. NOTE: nous sommes capable de
set chaque caracter dans le string a '\0' parce que notre fonction ft_memalloc
utilise la fonction ft_bzero*/
	return ((char *)ft_memalloc(size + 1));
}
