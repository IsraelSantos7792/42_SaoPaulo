/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:09:14 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/16 19:53:49 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;
	int	size;

	size = 0;
	index = 0;
	if (str[size] == '\0')
	{
		return (1);
	}
	while (str[size] != '\0')
	{
		size = size + 1;
	}
	while (index < size)
	{
		if ((str[index] >= ' ') && (str[index] <= '~'))
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
