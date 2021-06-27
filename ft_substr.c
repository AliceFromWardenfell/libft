/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:56:19 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/23 16:28:45 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*sub;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	if (!(sub = (char*)malloc((len + 1) * sizeof(*s))))
		return (NULL);
	index = 0;
	while ((len != 0) && (s[start] != '\0'))
	{
		sub[index] = s[start];
		start++;
		index++;
		len--;
	}
	sub[index] = '\0';
	return (sub);
}
