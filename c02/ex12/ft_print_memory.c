/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-- <jsousa--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:57:21 by jsousa--          #+#    #+#             */
/*   Updated: 2025/03/06 18:39:47 by jsousa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_addr_hexa(unsigned long addr)
{
	char	buff[18];
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	buff[17] = ' ';
	buff[16] = ':';
	i = 15;
	while (i >= 0)
	{
		buff[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buff, 18);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_put_hex_content(unsigned char *addr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_print_hexa(addr[i]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_put_char_content(unsigned char *addr, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = '.';
		if (addr[i] >= 32 && addr[i] <= 126)
			c = addr[i];
		write(1, &c, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_size;

	i = 0;
	while (i < size)
	{
		line_size = 16;
		if (size - i < 16)
			line_size = size - i;
		ft_put_addr_hexa((unsigned long)(addr + i));
		ft_put_hex_content((unsigned char *)(addr + i), line_size);
		ft_put_char_content((unsigned char *)(addr + i), line_size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "c'EST VR4IMENnt cooool de le print ce truc";
	ft_print_memory(a,42);
	return (0);
}
*/