/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:21 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/07 12:41:19 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphamin(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	is_alphamaj(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i])
	{
		if (is_alphamin(str[i]) == 0 && is_alphamaj(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d ", ft_str_is_alpha("abcd3fgh"));
	printf("%d ", ft_str_is_alpha("abcDEFgh"));
	printf("%d ", ft_str_is_alpha("abcdefgh"));
	printf("%d ", ft_str_is_alpha("abc\nfgh"));
}
*/