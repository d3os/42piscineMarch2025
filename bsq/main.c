/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:24:36 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/10 17:04:23 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	nbgrille;
	char	*tabgrilles;
	
	nbgrille = 1;
	if (argc < 2)
	{
		//read
		tabgrilles[0] = //assignation de la read
	}
	else
	{
		while(argv[nbgrille])
			tabgrilles[nbgrille - 1] = argv[++nbgrille];
	}
	while (*tabgrilles)
	{
		//lire les infos ( nb ligne , caractere vide, caractere plein)
		//calculer
		//afficher 
		write(1, "\n", 1);
	}
	return (0);
}
