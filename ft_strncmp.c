/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:18:09 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/08 13:18:16 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int index;

	index = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[index] == (unsigned char)s2[index]) &&
	((unsigned char)s1[index] != '\0') &&
	((unsigned char)s2[index] != '\0') && (index < n - 1))
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
