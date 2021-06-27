/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvrone <cvrone@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:15:23 by cvrone            #+#    #+#             */
/*   Updated: 2020/11/21 22:55:25 by cvrone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(char *s, char c)
{
	unsigned int	index;
	unsigned int	k;

	k = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			k++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
		if (s[index] != '\0')
			index++;
	}
	return (k);
}

static char			**free_rez(char **rez)
{
	unsigned int	index;

	index = 0;
	while (rez[index])
	{
		free(rez[index]);
		index++;
	}
	free(rez);
	return (NULL);
}

static char			*word_creation(char *str,
		unsigned int index, char c)
{
	char			*word;
	unsigned int	jndex;

	jndex = index;
	while (str[jndex] != c && str[jndex] != '\0')
	{
		jndex++;
	}
	if (!(word = (char*)malloc((jndex - index + 1) * sizeof(*word))))
		return (NULL);
	jndex = 0;
	while (str[index] != c && str[index] != '\0')
	{
		word[jndex] = str[index];
		index++;
		jndex++;
	}
	word[jndex] = '\0';
	return (word);
}

char				**ft_split(char const *s, char c)
{
	unsigned int	index;
	unsigned int	jndex;
	char			**rez;

	if (!s ||
	(!(rez = (char**)malloc((1 + count((char*)s, c)) * sizeof(*rez)))))
		return (NULL);
	index = 0;
	jndex = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			rez[jndex] = word_creation((char*)s, index, c);
			if (!rez[jndex])
				return (free_rez(rez));
			jndex++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
		if (s[index] != '\0')
			index++;
	}
	rez[jndex] = NULL;
	return (rez);
}
