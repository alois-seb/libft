/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:08:19 by asebrech          #+#    #+#             */
/*   Updated: 2021/03/31 16:15:13 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strchr(set, s1[len]) && len)
		len--;
	str = ft_substr((char *)s1, 0, len + 1);
	return (str);
}
