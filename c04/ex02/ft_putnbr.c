/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:13:46 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/24 12:18:15 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_recursive(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr_recursive(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_putnbr_recursive(n);
}
/*
int main(void) {ft_putnbr(9);return(0);}
*/
