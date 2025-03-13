/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:26:37 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/24 15:11:02 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b)
{
	char	num[6];

	num[0] = (a / 10) + '0';
	num[1] = (a % 10) + '0';
	num[2] = ' ';
	num[3] = (b / 10) + '0';
	num[4] = (b % 10) + '0';
	num[5] = '\0';
	write(1, num, 5);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	fc;
	int	sc;

	fc = 0;
	while (fc < 99)
	{
		sc = fc + 1;
		while (sc < 100)
		{
			ft_print(fc, sc);
			sc++;
		}
		fc++;
	}
}
/*
int main(void) {ft_print_comb2();return(0);}
*/
