/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:37:19 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/09 19:31:23 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	longb;

	longb = 0;
	while (base[longb])
		longb++;
	if (!checkbase(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(nbr / longb), base);
		ft_putnbr_base(-(nbr % longb), base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= longb)
		ft_putnbr_base(nbr / longb, base);
	write(1, &base[nbr % longb], 1);
}
/*
#include <stdio.h>

int	main(void)
{
	// char	base[]= "0123456789ABCDEF";
	char	base[]= "0123456789";
	ft_putnbr_base(-2147483648, base);
	return (0);
}
*/