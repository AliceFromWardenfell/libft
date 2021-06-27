/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:41:58 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/16 01:04:48 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	index;
	char			*cp;

	if (!(cp = (char*)malloc((ft_strlen(str) + 1) * sizeof(*str))))
		return (NULL);
	index = 0;
	while (index != ft_strlen(str))
	{
		cp[index] = str[index];
		index++;
	}
	cp[index] = '\0';
	return (cp);
}
