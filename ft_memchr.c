/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:52:23 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/11 19:59:16 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t n)
{
	size_t	index;

	index = 0;
	while (index != n)
	{
		if (((unsigned char*)str)[index] == (unsigned char)chr)
			return ((void*)(str + index));
		index++;
	}
	return (NULL);
}
