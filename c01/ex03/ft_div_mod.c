/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:39:01 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/25 19:08:09 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
int	a = 45; int b = 42;
int div, mod;
ft_div_mod(a, b, &div, &mod);
printf("Apres execution a = %d b= %d div = %d mod = %d", a, b, div, mod);
return (0);
}
*/
