/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:19:01 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/16 18:35:41 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *lst;
	t_list *bas;

	char	**mat;
	int	index;
	int	sonuc;
	
	char	a[] = "tarik";
	char	b[] = "yildirim";
	char	c[] = "irem";
	char	d[] = "maymun";
	char	e[] = "deneme";

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (0);
	bas = lst;
	mat = (char **)malloc(sizeof(char *) * 6);
	if (mat == NULL)
		return (0);
	
	mat[0] = a;
	mat[1] = b;
	mat[2] = c;
	mat[3] = d;
	mat[4] = e;
	mat[5] = 0;

	index = 0;
	while (mat[index] != NULL)
	{
		printf("\nMatrisin %d indexli elemanı: %s", index, mat[index]);
		index++;
	}
	printf("\n");
	index = 0;
	while (mat[index] != NULL)
	{
		lst = ft_lstnew(mat[index]);
		printf("\nLst Content: %s", lst->content);
		ft_lstadd_back(&bas,lst);
		lst = lst->next;
		index++;
	}
	sonuc = ft_lstsize(bas);
	printf("\n\nSonuc: %d", sonuc);
}*/

/*
int	main(void)
{
	t_list	*lst;
	int	sonuc;
	char	a[] = "tarik";
	char	b[] = "yildirim";
	char	c[] = "irem";
	char	d[] = "maymun";
	char	e[] = "deneme";

	lst = (t_list *) malloc(sizeof(t_list));
	if(lst == NULL)
		return (0);
	lst = ft_lstnew(a);
	lst->next = ft_lstnew(b);
	lst->next->next = ft_lstnew(c);
	lst->next->next->next = ft_lstnew(d);
	//sonuc = ft_lstsize(lst);
	//printf("Değer: %d\n", sonuc);
	
	//İşlem otomatik olarak yapılmazsa adımlar aşağıdaki gibi devam eder.
	lst->next->next->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->next->next->content = e;
	lst->next->next->next->next->next = NULL;

	sonuc = ft_lstsize(lst);
	printf("Sonuc: %d\n", sonuc);
	printf("lst content: %s - lst next: %s", lst->content, lst->next->content);
}*/
