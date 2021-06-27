/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:20:17 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/11 19:48:19 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int chr, size_t n)
{
	size_t	index;

	index = 0;
	while (index != n)
	{
		((unsigned char*)dest)[index] = ((unsigned char*)src)[index];
		if (((unsigned char*)dest)[index] == ((unsigned char)chr))
			return (((void*)(dest + index + 1)));
		index++;
	}
	return (NULL);
}
