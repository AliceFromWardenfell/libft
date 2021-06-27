/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:32:41 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/10 19:54:58 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n != 0)
	{
		while (n != 0)
		{
			((char*)str)[n - 1] = 0;
			n--;
		}
		((char*)str)[0] = 0;
	}
}
