/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 21:37:22 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/18 21:44:36 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function will display the string s on the standard output followed by a
 *'\n', which is a new line. We do this by using our ft_putstr and ft_putchar 
 * functions that we previously made. We use our ft_putstr on our string s to
 * display it on the standard output. Then we use our ft_putchar to have our
 * string followed by a new line.*/
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
