/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:06:28 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/07 10:19:47 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "bricodepot";
	char	*s2 = "bricodepotoir";
	printf("ORIGINAL: %d\n", strcmp(s1, s2));
	printf("FC: %d\n", ft_strcmp(s1, s2));
}
*/
