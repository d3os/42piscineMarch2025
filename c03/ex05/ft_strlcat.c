/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:11:27 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/06 17:05:36 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	i = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	a[20] = "brico";
	char	b[20] = "depot";
	char	a2[8] = "brico";
	char	b2[20] = "depot";
	char	z[20] = "brico";
	char	w[20] = "depot";
	char	z2[8] = "brico";
	char	w2[20] = "depot";
 // compile with -lbsd
	printf("STRLCAT %lu\n", strlcat(a, b, 20));
	printf("STRLCAT: %s\n", a);
	printf("STRLCAT %lu\n", strlcat(a2, b2, 8));
	printf("STRLCAT: %s\n", a2);
	printf("FT: %u\n", ft_strlcat(z, w, 20));
	printf("FT: %s\n", z);
	printf("FT: %u\n", ft_strlcat(z2, w2, 8));
	printf("FT: %s\n", z2);
	return (0);
}
*/
