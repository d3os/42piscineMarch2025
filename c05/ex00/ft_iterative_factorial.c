/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:46:53 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/13 11:26:25 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	if (nb < 0)
		return (0);
	r = 1;
	i = 1;
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>
int main(void){printf("%d\n", ft_iterative_factorial(0)); return(0);}
*/
