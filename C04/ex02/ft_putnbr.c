/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:19:59 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/18 19:25:10 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_base(int nbr)
{
	int base;

	base = 1;
	while (nbr > 9 || nbr < -9)
	{
		base = base * 10;
		nbr = nbr /10;
	}
	return (base);
}

void	ft_putnbr(int nb)
{
	int	nbr;
	int	base;
	char	nbr_res;
	nbr = 0;
	nbr = nb;
	base = ft_base(nbr);

	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb/base;
		printf("%i\n",nbr);
		nbr *= (-1);
		printf("%i\n",nbr);
		nbr_res = nbr + '0';
		write(1, &nbr_res, 1);
		nb = nb % base;
		nb *= (-1);
		base = base / 10;
	}
	while (base >= 1)
	{
		nbr = nb / base;
		nbr_res = nbr + '0';
		write(1, &nbr_res, 1);
		nb = nb % base;
		base = base / 10;
	}
}
