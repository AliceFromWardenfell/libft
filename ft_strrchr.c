/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:12:06 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/08 15:41:23 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	unsigned int	index;

	index = ft_strlen(str);
	while (index != 0)
	{
		if (str[index] == chr)
			return ((char*)&str[index]);
		index--;
	}
	if (str[0] == chr)
		return ((char*)str);
	return (NULL);
}
