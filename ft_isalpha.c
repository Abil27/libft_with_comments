/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 05:01:14 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/26 05:03:37 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	/* cette fonction permet de tester si un caractere est minuscule ou majuscule
	elle retourne true si la valeur est alpha et 0 si c'est false*/
	return (ft_islower(c)) || (ft_isupper(c));
}
