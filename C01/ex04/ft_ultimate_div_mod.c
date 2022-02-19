/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:45:51 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/16 14:42:57 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		aux1;
	int		aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}
