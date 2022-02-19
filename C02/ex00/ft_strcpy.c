/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:55:45 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/17 19:01:42 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	index;

	size = 0;
	while (src[size] != '\0')
	{
		size = size + 1;
	}
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	dest[index] = '\0';
	return (dest);
}
