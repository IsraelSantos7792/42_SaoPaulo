/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:37:59 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/06 23:57:51 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);
//                     4       5      0       5
char	selct_char(int px, int x, int py, int y)
{
	if (px == 0 && py == 0)
	{
		return('/');
	}
	if (py == 0 && px == (x - 1))
	{
		return('\\');
	}
	if (py == (y -1) && px == 0)
	{
		return('\\');
	}
	if (py == (y - 1) && px == (x - 1))
	{
		return('/');
	}
	if ((py == 0 || py == (y - 1)) || (px == 0 || px == (x - 1)))
	{
		return('*');
	}
	return(' ');
}

void	rush(int x, int y)
{
	int		px;
	int		py;
	char 	c;

	px = 0;
	py = 0;
	while (py < y)
	{
		while (px < x)
		{
			c = selct_char(px, x, py, y);
			ft_putchar(c);
			px++;
		}
		px = 0;
		py++;
		ft_putchar('\n');
	}
	return ;
}
