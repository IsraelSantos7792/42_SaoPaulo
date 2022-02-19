/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:13:04 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/14 22:20:36 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	size = size - 1;
	while (count < size)
	{
		temp = tab[size];
		tab[size] = tab[count];
		tab[count] = temp;
		count++;
		size--;
	}
}
