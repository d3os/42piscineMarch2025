/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:29:51 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/09 19:31:32 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	idx_from_base(char c, char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				f;
	int				n;
	unsigned int	lb;

	i = 0;
	f = 1;
	n = 0;
	if (!checkbase(base))
		return (0);
	lb = ft_strlen(base);
	while (str[i] && (str[i] == ' ' || (str[i] > 7 && str[i] < 14)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			f *= -1;
		i++;
	}
	while (str[i] && idx_from_base(str[i], base) != -1)
	{
		n = (n * lb) + idx_from_base(str[i], base);
		i++;
	}
	return (n * f);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "   \t      +-+-++5b98pa5";

	printf("%d\n", ft_atoi_base(a, "0123456789abcdef"));
	return (0);
}
*/