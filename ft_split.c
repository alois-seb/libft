/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:27:03 by asebrech          #+#    #+#             */
/*   Updated: 2021/03/31 17:59:55 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**nb_set(char const *s, char c, char **strs)
{
	unsigned int	nb;

	nb = 0;
	while (s1)
	{
		if (*s1 == c)
			nb++;
		s1++;
	}
	strs = malloc(sizeof(char *) * nb + 1);
	return (strs);
}

char	**len_set(char const *s, char c, char **strs)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (s1)
	{
		if (!(*s1 == c))
			len++;
		else
		{
			strs[i] = malloc(sizeof(char) * len + 1);
			len = 0;
			i++;
		}
		s1++;
	}
	return (strs);
}

char	**cpy_set(char const *s, char c, char **strs)
{
	unsigned int i;

	i = 0;
	while (s1)
	{
		while (!(*s1 == c))
			*strs[i]++ = *s1++;
		if (*s1 == c)
			i++:
		s1++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = nb_set(s, c, strs);
	strs = len_set(s, c, strs);
}
