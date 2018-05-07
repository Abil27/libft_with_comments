/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 07:32:45 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:14:21 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* memset - Remplir une zone de mémoire avec un octet donné.
 * La fonction memset() remplit les n premiers octets  de la
 * zone de mémoire pointée par b avec l'octet c. La fonction  
 * memset() renvoie un pointeur sur la zone de
 *mémoire b */

void	*ft_memset(void *b, int c, size_t len)
{
	/* on declare le len avec i et on initialise a zero. Tant que i
	est inferieur au len la loop continue. Ensuite on cast(le cast 
	c'est la conversion du type d'une variable vers un autre type) 
	le pointeur b a un char et on initialise cela a la valeur de c.
	*/
	size_t i;

	i = 0;
	while (i < len)
	{
		/* on peut aussi stocker le cast dans un pointeur comme ceci
		char *p;
		p = (char *)b;
		p[i] = (unsigned char )c
		i++;
		*/
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/* main pour tester la fonction
int main()
{
	char str[] = "Ceci est un test de la fonction memset";
	printf("Avant memset str affiche ceci: %s\n", str);

	ft_memset(str, '$', 5);
	printf("Apres memset, la fonction affiche ceci: %s\n", str);

	return (0);
}
*/
