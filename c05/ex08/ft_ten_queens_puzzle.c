/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:31:27 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/12 12:44:51 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int board[10])
{
	int	i;
	int	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || (i - col) == (board[i] - row) || (i
				- col) == (row - board[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_solve(int board[10], int col)
{
	int				row;
	unsigned int	count;

	if (col == 10)
	{
		print_solution(board);
		return (1);
	}
	count = 0;
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			count += ft_solve(board, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (ft_solve(board, 0));
}
/*
#include <stdio.h>
int	main(void){printf("%d\n", ft_ten_queens_puzzle());return (0);}
*/
