/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:41:49 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/16 19:51:03 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	size;
	int	index;

	index = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size = size + 1;
	}
	while (index < size && str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			index = index + 1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
