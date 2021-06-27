/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:01:32 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/16 01:05:33 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	index;
	short int		sign;
	unsigned int	rezult;

	rezult = 0;
	sign = 1;
	index = 0;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\v' ||
	str[index] == '\r' || str[index] == '\n' || str[index] == '\t')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] > 47 && str[index] < 58)
	{
		rezult = rezult * 10 + str[index] - 48;
		index++;
	}
	return (sign * rezult);
}
