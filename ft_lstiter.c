/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:49:12 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/16 18:36:24 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		while (lst != NULL)
		{
			tmp = lst->next;
			f(lst->content);
			lst = tmp;
		}
	}
}
