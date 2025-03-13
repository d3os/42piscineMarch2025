/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:57:33 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/09 15:34:43 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	f;
	int	n;

	i = 0;
	f = 1;
	n = 0;
	while (str[i] && (str[i] == ' ' || (str[i] > 7 && str[i] < 14)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			f *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * f);
}
/*
#include <stdio.h>
int    main(void)
{
	char a[]= "   \t      +-+-++598a5";
	printf("%d\n",ft_atoi(a));
	return (0);
}
*/