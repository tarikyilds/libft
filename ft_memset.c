/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:18 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/07 03:22:39 by tyildiri         ###   ########.tr       */
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

void	deneme()
{
	char *a;
	a = malloc(sizeof(char)* 2);
	char *b;
	b = a;

	*a++ = 'q';
	*b = 'X';
	*a = '\0'; 
	printf(" a value %c, b value %s;",*(--a),b);
//printf("a = %s b = %s",a,b);

//intf("b = %s, %p,%p",b, a ,b);

//	while (*b != '\0')
//			*b++ = 'X';
//			printf("b = %s,  a = %s , %p,%p",b,a, a ,b);

}

int	main(void)
{
	//char	dizi[] = "arikYildirim";
    //ft_memset(dizi, 'z', 5);
	//printf("Değer: %s", dizi);
	deneme();
}
