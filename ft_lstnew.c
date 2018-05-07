/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 06:29:01 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 06:36:09 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*We will be allocating memory for, and returning, a "fresh" linked list. The 
 * elements content and content_size within our new link will be copied from the 
 * parameters of the function. If the parameter content is NULL the the element 
 * content_size is initialized to 0 regardless of the paramter of content_size.
 * The element of next is initialized to NULL. If the memory allocation fails
 * then we will return NULL*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if (!(list->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	/*Last we set our link list new's next element to NULL so that we know
	 * that we are at the end of the list. We then return our link.*/
	list->next = NULL;
	return (list);
}
