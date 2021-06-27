/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:18:30 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/08 14:32:20 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	unsigned int	index;
	unsigned int	jndex;

	index = 0;
	if (*small == 0)
		return ((char*)big);
	while (big[index] != '\0' && (size_t)index < n)
	{
		if (big[index] == small[0])
		{
			jndex = 0;
			while (small[jndex] == big[index + jndex]
			&& (size_t)(index + jndex) < n && small[jndex] != '\0')
				jndex++;
			if (small[jndex] == '\0')
				return ((char*)&big[index]);
		}
		index++;
	}
	return (NULL);
}
