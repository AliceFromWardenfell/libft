/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:00:36 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/22 19:24:05 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	index;

	if (!dest && !src)
		return (NULL);
	index = 0;
	while (index != n)
	{
		((char*)dest)[index] = ((char*)src)[index];
		index++;
	}
	return (dest);
}
