/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:07:13 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:00:20 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*We will be allocating memory for, and returning, a "fresh" linked list. The 
 * elements content and content_size within our new link will be copied from the 
 * parameters of the function. If the parameter content is NULL the the element 
 * content_size is initialized to 0 regardless of the paramter of content_size.
 * The element of next is initialized to NULL. If the memory allocation fails
 * then we will return NULL*/
void	*ft_memalloc(size_t size)
{
	/*We first make a void variable of pointer *mem. This is so that we can use the
	 *zone of allocated memory that will be applied to it for any type of data.*/
	void	*mem;
/*We then use malloc to allocate memory to our mem variable based on the size
*given in the parameter. If the allocation fails we return NULL. Otherwise
we then run the function ft_bzero on our allocated zone of memory mem and
give it our size parameter. We then return our void variable mem.*/
	if (!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
