/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:18 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 08:17:45 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int			i;
	char		*dizi;

	dizi = (char *) b;
	i = 0;
	while (len > 0)
	{
		((unsigned char *)b)[i] = c;
		i++;
		len--;
	}
	return (dizi);
}
/*
int	main(void)
{
	char	dizi[] = "tarik yildirim";
    ft_memset(dizi, 'z', 5);
	printf("Değer: %s", dizi);
}*/
