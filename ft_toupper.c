/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:47 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 06:42:17 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'G';
	a = ft_toupper(a);
	b = ft_toupper(b);
	printf("Değerler: %c - %c", a, b);
}*/
