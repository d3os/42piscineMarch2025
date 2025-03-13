/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:25:46 by jsousa--          #+#    #+#             */
/*   Updated: 2025/02/27 22:07:31 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	had_swap;
	int	i;
	int	temp;

	had_swap = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			had_swap = 1;
		}
		i++;
		if (had_swap)
		{
			ft_sort_int_tab(tab, size - 1);
		}
	}
}
/*
int	main(void)
{
	int	a[] = {64, 45, 42, 89, 5, 7, 3, 6};
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%d ", a[i]);
		i++;
	}
	ft_sort_int_tab(a, 8);
	printf("*magic* -> ");
	i = 0;
	while (i < 8)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}
*/
