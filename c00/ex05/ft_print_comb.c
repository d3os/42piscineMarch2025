/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:30:45 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/24 11:11:58 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c)
{
	char	num[4];

	num[0] = a + '0';
	num[1] = b + '0';
	num[2] = c + '0';
	num[3] = '\0';
	write(1, &num, 3);
	if (! (a == 7 && b == 8 && c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	f;	
	int	s;	
	int	t;

	f = 0;
	while (f < 8)
	{
		s = f + 1;
		while (s < 9)
		{
			t = s + 1;
			while (t < 10)
			{
				ft_print(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
/*
int main(void) {ft_print_comb();return(0);}
*/
