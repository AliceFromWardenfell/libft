/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:18:49 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/08 13:49:22 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == chr)
			return ((char*)&str[index]);
		index++;
	}
	if (chr == '\0')
		return ((char*)&str[index]);
	return (NULL);
}
