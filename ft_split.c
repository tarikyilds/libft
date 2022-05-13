/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:15:34 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/09 22:40:47 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countchar(const char *s, char c, int opt_delimit)
{
	size_t	i;

	i = 0;
	if (opt_delimit)
	{
		while (s[i] && s[i] != c)
			i++;
	}
	else
	{
		while (s[i] && s[i] == c)
			i++;
	}
	return (i);
}

static size_t	ft_kelimesayisi(const char *str, char c)
{
	size_t	i;
	size_t	kelime_sayisi;

	i = 0;
	kelime_sayisi = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != c)
			i++;
		kelime_sayisi++;
		while (str[i] != '\0' && str[i] == c)
			i++;
	}
	return (kelime_sayisi);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	kelime_sayisi;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	kelime_sayisi = ft_kelimesayisi(s, c);
	array = (char **)malloc(sizeof(char *) * (kelime_sayisi + 1));
	if (!array)
		return (NULL);
	while (i < kelime_sayisi)
	{
		s += ft_countchar(s, c, 0);
		array[i] = ft_substr(s, 0, ft_countchar(s, c, 1));
		if (!array)
			return (NULL);
		s += ft_countchar(s, c, 1) + ft_countchar(s, c, 0);
		i++;
	}
	array[i] = NULL;
	return (array);
}
/*
int	main(void)
{
	const char *s = "deneme-sa-naber-iyi-senden";
	char c = '-';
	char **sonuc;
	int	i = 0;
	sonuc = ft_split(s, c);
	while (sonuc[i] != NULL)
	{
		printf("Değerler: %s\n", sonuc[i++]);
	}
}*/
