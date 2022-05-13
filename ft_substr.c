/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:58:09 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/13 08:36:47 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	len_src;

	dest = (char *) malloc(sizeof(char) * len + 1);
	if (!dest || s == NULL)
		return (NULL);
	len_src = ft_strlen(s);
	i = 0;
	while (start < len_src && len > 0)
	{
		dest[i++] = s[start++];
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	const char s[] = "tarikyilds";
	unsigned int start = 2;
	size_t len = 4;
	char *sonuc;
	sonuc = ft_substr(s, start, len);
	printf("Sonuç: %s", sonuc);
}*/
