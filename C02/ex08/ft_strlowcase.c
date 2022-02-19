/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:27:21 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/16 19:55:19 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
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
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index = index + 1;
	}
	return (str);
}
