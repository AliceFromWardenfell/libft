/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:50:28 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/24 16:02:24 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t n)
{
	unsigned int	index;

	index = 0;
	while (index != n)
	{
		((char*)str)[index] = val;
		index++;
	}
	return (str);
}
