/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:08:34 by asebrech          #+#    #+#             */
/*   Updated: 2021/03/25 10:13:46 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "this is the way";
	printf("or : %s\n", strchr(str, 'w'));
	printf("ft : %s\n", ft_strchr(str, 'w'));
}
