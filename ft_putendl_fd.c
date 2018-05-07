/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 01:54:22 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/02 01:56:09 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function writes the string s to the file descriptor fd followed by a
 * '\n' to make a new line. This function is exactly the same as our ft_putendl
 * function except that we take in a parameter for the file descriptor. We will
 * use our ft_putstr_fd and ft_putchar_fd functions to make this function work.
 * Please review ft_putstr_fd and ft_putchar_fd to understand the inner
 * workings of this function.*/
void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
