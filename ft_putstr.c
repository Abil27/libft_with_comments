/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 14:09:48 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:18:08 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function displays the string s to the standard output. We do this using
 * our ft_putchar function. We start by declaring a size_t variable i that we
 * will use to move through our string. We use a size_t because it is
 * guaranteed to be big enough to contain the size of the biggest object your
 * system can handle. This way we can display the absolute biggest string that
 * our computer can handle. We set i equal to 0 to start at the beginning of
 * the parameter string s. We then do a simple loop stating that so long as we
 * have not reached the end of our string we want the loop to continue. We move
 * to each index position of our string and place the character in that
 * position as a parameter for our ft_putchar function. The ft_putchar function
 * will put that character in the standard output and then we increment the i
 * variable to continue moving through the string. We do this until we reach
 * the terminating '\0' of the string.*/
void	ft_putstr(char const *s)
{
	while (*s != 0)
	{
		ft_putchar(*s);
		s++;
	}
}
