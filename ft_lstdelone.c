/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:09:23 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 01:26:29 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
/*
void	delone(void *lst)
{
	lst = NULL;
}

int	main(void)
{
	t_list	*lst;
	
	
	lst = ft_lstnew("tarik");
	printf("lst content: %p\n", lst);

	ft_lstdelone(lst, delone);

	if (!lst)
		printf("lst content: (null)");
	else
		printf("lst content: %s", lst->content);
	return (0);
}*/
