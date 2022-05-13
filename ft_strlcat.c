/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:16:35 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 08:32:00 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + count);
}
/*
int	main(void)
{
	char	dst[] = "tarik";
	char	src[] = "yildirim";
	size_t sonuc;

	size_t size = 8;
	sonuc = ft_strlcat(dst, src, size);
	printf("Değer: %zu - Dst Value: %s Src Value: %s", sonuc, dst, src);
}*/
