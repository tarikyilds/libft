/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:57:56 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/12 19:50:10 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list) * 3 + 1);
	if (lst == NULL)
		return (0);
	lst = ft_lstnew("Tarik");
	lst->next = ft_lstnew("Dilek");
	lst->next->next = ft_lstnew("Deneme");
	lst = ft_lstlast(lst);
	printf("lst last item: %s", lst->content);
}*/
