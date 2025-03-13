/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:20:54 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/27 20:11:27 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = temp;
		index++;
	}
}
/*
int	main(void)
{
	int	a[] = {1, 2, 4, 5, 3};
	int	i;

	i = 0;
	while (i < 5) { printf("%d ", a[i]); i++; }
	ft_rev_int_tab(a, 5);
	printf("*magic* -> ");
	i = 0;
	while (i < 5) { printf("%d ", a[i]); i++; }
	return (0);
}
*/
