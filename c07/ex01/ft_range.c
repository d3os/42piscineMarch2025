/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:46:42 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/12 17:37:09 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return ((void *)0);
	array = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*result = ft_range(5, 13);
	printf("OUTPUT : %p\n", result);
	printf("OUTPUT TAB VALUES : ");
	for (unsigned int loop = 0; loop < sizeof(result); loop++)
		printf("%d ", result[loop]);
	return (0);
}
*/
