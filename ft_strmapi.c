/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:35:55 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/23 16:41:11 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*rez;

	if (!s || !f)
		return (NULL);
	if (!(rez = (char*)malloc((ft_strlen(s) + 1) * sizeof(*rez))))
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		rez[index] = f(index, s[index]);
		index++;
	}
	rez[index] = '\0';
	return (rez);
}
