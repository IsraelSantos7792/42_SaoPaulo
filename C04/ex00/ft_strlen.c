/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isantos- <isantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:34:17 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/18 01:48:43 by isantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;
	unsigned int 	size;
	
	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}
