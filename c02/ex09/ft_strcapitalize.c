/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:21 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/06 17:29:49 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_alphanum(char c)
{
	return (is_min(c) || is_maj(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alphanum(str[i - 1]) && is_min(str[i]))
			str[i] -= 32;
		else if (is_alphanum(str[i - 1]) && is_maj(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	chaine[]= "j'adore bricotdepot ! mASTERCLASSE jean-pierre";
	printf("BEFORE : %s ", chaine);
	printf("\n");
	ft_strcapitalize(chaine);
	printf("AFTER : %s ", chaine);
}
*/
