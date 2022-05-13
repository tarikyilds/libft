/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:41:39 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/12 23:41:00 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*iki;
	t_list	*new;
	int	index;

	lst = ft_lstnew("tarik");
	iki = ft_lstnew("dilek");
	new = ft_lstnew("last item");

	ft_lstadd_front(&lst, iki);
	ft_lstadd_front(&lst, new);

	index = 0;
	while (lst)
	{
		printf("lst index: %d --- lst item: %s\n", index, lst->content);
		lst = lst->next;
		index++;
	}
	return (0);
}*/
