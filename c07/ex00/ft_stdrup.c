/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdrup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:57:29 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/12 14:24:17 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[11] = "bricodepot";
	printf("ORIGINAL : %s\n", ft_strdup(a));
	printf("ORI ADRESS : %p\n", ft_strdup(a));
	printf("COPY : %s\n", ft_strdup(a));
	printf("COP ADRESS : %p\n", ft_strdup(a));
	return (0);
}
*/
