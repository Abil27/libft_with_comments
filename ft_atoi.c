/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 01:47:35 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/02 01:50:33 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* la fonction atoi permet de convertir un string en un int. On prend une chaine
	de caractere qui est sense etre un nombre e on le converti en int*/
int	ft_atoi(const char *str)
{
	/* on commence par creer un i qui sera le compteur pour looper dans le string.
	Ensuite on cree une variable res qui va stocker le resultat qui sera renvoye. 
	ce dernier est de type long long int pour etre sur qu'on peut le stocker dans 
	lintervalle compris entre -2147483647 and 2147483647. Ensuite le dernier var neg
	sera ce que nous utilisons pour tourner l'int négatif dans le cas où c'est un nombre
	négatif qui est mis dans la chaîne. On le garde tant que nous pouvons le multiplier
	par le res a la fin. On les initialise a zero sauf le neg a 1 sur la basee de lapparition
	du symbol neg dans notre chaine.*/
	int				i;
	int				neg;
	long long int	res;

	res = 0;
	neg = 1;
	i = 0;
	/* La premier des choses que notre fonction va faire est d'escape et de continuer la looper
	si elle rencontre tout type d'esapce au debut de notre chaine */
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
				str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
		i++;
	/*Ensuite nous verifions si le symbol au debut de notre chaine. si c'est un signe negatif
	nous lajustons en le rendant egal a -1 pour le multplier avec notre resulta a la fin' */
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	/*Ensuite nous convertissons notre chaine de char a int si ce dernier est un nombre. Si c'est le
	cas on le converti a son ascii. Pour le premier caractere res est toujours initialiser a 0. Ensuite
	nous multiplions notre res par 10 pout mettre le digit la ou il devrait etre. Ensuite nous faisons la
	soustraction de 0(48 sur le ascci table) de notre caractere actuel qui le set a son ascii value. Puis
	nous commencons la loupe jusqua ce qu'on ne trouve plus de nombre dans la chaine et pour terminer
	nous retournons le res */
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res *= 10;
		res += (long long int)(neg * (str[i] - 48));
		i++;
	}
	return (res);
}
