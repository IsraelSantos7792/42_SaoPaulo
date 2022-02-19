/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:49:17 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/18 01:17:38 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *dest)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
