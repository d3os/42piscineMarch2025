/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:46:42 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/12 20:12:42 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while ((min + i) < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return ((int)sizeof(*range));
}
/*
#include <stdio.h>
int	main(void)
{
	int	*array;
	printf("OUTPUT : %d\n", ft_ultimate_range(&array, 5, 13));
	printf("OUTPUT TAB VALUES : ");
	for (unsigned int loop = 0; loop < sizeof(array); loop++)
		printf("%d ", array[loop]);
	return (0);
}
*/
