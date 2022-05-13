/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:09:08 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 08:43:06 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
/*
int	main(void)
{
	t_list *lst;
	t_list *iki;
	t_list *uc;
	t_list *dort;
	int	index;

	lst = ft_lstnew("first");
	iki = ft_lstnew("yilds");
	uc = ft_lstnew("tarık");
	dort = ft_lstnew("berkay");

	ft_lstadd_back(&lst, iki);
	ft_lstadd_back(&lst, uc);
	ft_lstadd_back(&lst, dort);

	index = 0;
	while (lst)
	{
		printf("lst index: %d lst content: %s\n", index, lst->content);
		lst = lst->next;
		index++;
	}
	return (0);
}*/
