/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:27:03 by asebrech          #+#    #+#             */
/*   Updated: 2021/04/01 17:08:11 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	nb_strs(char const *s, char c)
{
	unsigned int	nb;

	nb = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c )
		{
			nb++;
			while (*s && *s == c)
				s++;
		}
		else
			s++;
	}
	if ((*s - 1) != c)
		nb++;
	return (nb);
}

static unsigned int	len_word(char const *s, char c, unsigned int i)
{
	unsigned int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char			**free_strs(char **strs, int j)
{
	while (j > 0)
	{
		j--;
		free(strs[j]);
	}
	free(strs);
	return (NULL);
}

static char			**dup_strs(char const *s, char c, unsigned int len, char **strs)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while ( s[i] && j < len)
	{
		k = 0;
		while (s[i] == c)
			i++;
		strs[j] = malloc(sizeof(char) * len_word(s, c, i) + 1);
		if (!strs[i])
			return (free_strs(strs, j));
		while (s[i] && s[i] != c)
		{
			strs[j][k] = s[i];
				i++;
				k++;
		}
		strs[j][k] = '\0';
		j++;
	}
	strs[j] = 0;
	return (strs);
}

char				**ft_split(char const *s, char c)
{
	char			**strs;
	unsigned int	len;

	if (!s)
		return (NULL);
	len = nb_strs(s, c);
	strs = malloc(sizeof(char *) * len + 1);
	if (!strs)
		return (NULL);
	strs = dup_strs(s, c, len, strs);
	return (strs);
}
