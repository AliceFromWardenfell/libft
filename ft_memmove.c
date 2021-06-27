/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:29:26 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/10 22:09:18 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*toreturn;
	size_t	index;

	index = 0;
	toreturn = dest;
	if (n == 0 || dest == src)
		return (toreturn);
	if (dest > src)
	{
		while (n != 0)
		{
			((char*)dest)[n - 1] = ((char*)src)[n - 1];
			n--;
		}
		((char*)dest)[0] = ((char*)src)[0];
	}
	else
		while (index != n)
		{
			((char*)dest)[index] = ((char*)src)[index];
			index++;
		}
	return (toreturn);
}
