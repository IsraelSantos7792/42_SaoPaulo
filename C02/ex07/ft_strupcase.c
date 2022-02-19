/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:13:42 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/16 19:54:37 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	size;
	int	index;

	size = 0;
	index = 0;
	while (str[size] != '\0')
	{
		size = size + 1;
	}
	while (index < size)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index = index + 1;
	}
	return (str);
}
