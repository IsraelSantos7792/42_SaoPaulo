/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:16:38 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/06 22:08:21 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int px, int x, int py, int y)
{
	if ((px == 0 && py == 0) || (py == 0 && px == (x - 1)))
	{
		ft_putchar('o');
		return ;
	}	
	if ((py == (y - 1) && px == 0) || (py == (y - 1) && px == (x - 1)))
	{
		ft_putchar('o');
		return ;
	}
	if (px == 0 || px == (x - 1))
	{
		ft_putchar('|');
		return ;
	}
	if (py == 0 || py == (y - 1))
	{
		ft_putchar('-');
		return ;
	}
	ft_putchar(' ');
	return ;
}

void	rush(int x, int y)
{
	int		px;
	int		py;

	px = 0;
	py = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (py < y)
	{
		while (px < x)
		{
			print_char(px, x, py, y);
			px++;
		}
		ft_putchar('\n');
		px = 0;
		py++;
	}
	return ;
}
