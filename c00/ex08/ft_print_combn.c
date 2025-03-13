/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:30:45 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/23 16:25:12 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_comb(char *digits, int index, int n, char start)
{
	char	auth_digit;

	if (index == n)
	{
		write(1, digits, n);
		if (digits[0] != '9' - (n - 1))
		{
			write(1, ", ", 2);
		}
		return ;
	}
	auth_digit = start;
	while (auth_digit <= '9')
	{
		digits[index] = auth_digit;
		ft_put_comb(digits, index + 1, n, auth_digit + 1);
		auth_digit++;
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];

	digits[9] = '\0';
	if (n <= 0 || n >= 10)
	{
		return ;
	}
	ft_put_comb(digits, 0, n, '0');
}
/*
int main(void) {ft_print_combn(8);ft_print_combn(2);return(0);}
*/
